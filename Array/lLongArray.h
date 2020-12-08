
llongArray initLLongArr()
{
    llongArray array = malloc(sizeof(long long) * 6);

    array[0] = array[1] = array[2] = ULLONG_MAX;
    // Items will append between these six items, last three bytes is same as as first three bytes
    // program will find for it to count the number of items in vector, or to determine when the array has ended, 
    // if they repeat somewhere in program, than these indicators will change themselve
    // they can change themselve in a way that they can take every combination possible
    // and every combination cannot be present in array in a row, if it finds every combination in array
    // than it'll stop appending items, and prompt that array is full.
    array[3] = array[4] = array[5] = ULLONG_MAX;
    return array + 3;
}
unsigned long SizeLLongs(llongArray array)
{  
    unsigned long i = 0;
    while (1)
    {
        // it'll check for indicators to determine size.
        if (array[i + 0] == array[-3] &&
            array[i + 1] == array[-2] &&
            array[i + 2] == array[-1])
        {
            return i;
        }
        i++;
    } 
}

llongArray InsertLLong(llongArray array, long long item, unsigned long index)
{
    long size = SizeLLongs(array);
    if (index < 0)
    {
        printf("Error: Index cannot be Negative\n");
        return array;
    }
    index = size < index ? size : index;

    llongArray newArray = malloc(sizeof(long long) * (size + 1 + 6));

    newArray[0] = array[-3];    // coping first three indicators
    newArray[1] = array[-2];
    newArray[2] = array[-1];

    newArray = newArray + 3;    // set array to starting position.

    long i = 0;
    long j = 0;
    while (i <= size) 
    {
        if (i == index)
        {
            newArray[i++] = item;
        }
        else
        {
            newArray[i++] = array[j++];
        }
    }

    newArray[i++] = array[-3];  // copy last three indicators
    newArray[i++] = array[-2];
    newArray[i++] = array[-1];

    long newSize = SizeLLongs(newArray);

    int requireSize = size + 1;
    while ((newSize = SizeLLongs(newArray)) != requireSize)
    {
        // keep changing indicators if indicator get repeated somewhere in array after inserting,
        // and be double sure and keep doing it until it finds none.
        if (newArray[-1] != 0 && newArray[-2] != 0 && newArray[-3] != 0) 
        {
            if (newArray[-1] != 0x00)       // third indicator is greater than 1?
            {
                newArray[-1] -= 1;         // decrement third indicator
                newArray[requireSize + 2] -= 1;
            }
            else if (newArray[-2] != 0x00)  // second indicator is greater than 1?
            {
                newArray[-2] -= 1;         // decrement second indicator
                newArray[requireSize + 1] -= 1;

                newArray[-1] = ULLONG_MAX;       // change third indicator to ULLONG_MAX
                newArray[requireSize + 2] = ULLONG_MAX;
            }
            else if (newArray[-3] != 0x00)  // first indicator is greater than 1?
            {
                newArray[-3] -= 1;         // decrement first indicator
                newArray[requireSize] -= 1;

                newArray[-2] = ULLONG_MAX;       // change second indicator to ULLONG_MAX
                newArray[requireSize + 1] = ULLONG_MAX;
            }
        }
        else 
        {
            printf("we're having troubly inserting more items, this array is full.");
            free(newArray - 3);
            return array;
        }
    } 

    free(array - 3);

    return newArray;   
}
long FindLLongFrom(llongArray array, long long item, unsigned long from)
{
    unsigned long size = SizeLLongs(array);
    for (unsigned long i = from; i < size; i++)
    {
        if (array[i] == item)
        {
            return i;
        }
    }
    return -1;
}
llongArray RemoveLLong(llongArray array, unsigned long index)
{
    long size = SizeLLongs(array);
    if (index < 0)
    {
        printf("Error: Index cannot be Negative\n");
        return array;
    }
    index = size < index ? size : index;

    llongArray newArray = malloc(sizeof(long long) * (size + 6 - 1));

    newArray[0] = array[-3];    // coping first three indicators
    newArray[1] = array[-2];
    newArray[2] = array[-1];

    newArray = newArray + 3;    // set array to starting position.

    long i = 0;
    long j = 0;
    for (; i < size; i++)       // it'll copy whole array except the one on that index
    {
        if (i != index)
        {
            newArray[j++] = array[i];
        }
    }

    newArray[j++] = array[-3];  // copy last three indicators
    newArray[j++] = array[-2];
    newArray[j++] = array[-1];

    free(array - 3);

    return newArray;
}

llongArray AppendLLong(llongArray array, long long item)
{
    return InsertLLong(array, item, SizeLLongs(array));
}
long FindLLong(llongArray array, long long item)
{
    return FindLLongFrom(array, item, 0);
}
llongArray ReplaceLLong(llongArray array, long long item, unsigned long index)
{
    array = RemoveLLong(array, index);
    array = InsertLLong(array, item, index);
    return array;
}
llongArray PopLLong(llongArray array)
{
    return RemoveLLong(array, SizeLLongs(array) - 1);
}

void logLLongs(llongArray array)
{
    long size = SizeLLongs(array);
    for (long i = 0; i < size; i++)
    {
        printf("[%ld] %lld\n", i, array[i]);
    }
}
int isSameLLongs(llongArray array1, llongArray array2)
{
    unsigned long size1 = SizeLLongs(array1);
    unsigned long size2 = SizeLLongs(array2);
    if (size1 != size2)
    {
        return 0; 
    }
    for (int i = 0; i < size1; i++)
    {
        if (array1[i] != array2[i])
        {
            return 0;
        }
    }
    return 1;
}

void DeleteLLongs(llongArray array)
{
    free(array - 3);
}