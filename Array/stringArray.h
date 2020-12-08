stringArray initStringArr()
{
    stringArray array = malloc(sizeof(string) * 1);

    array[0] = NULL;

    return array;
}
unsigned long SizeStrings(stringArray array)
{
    unsigned long i = 0;
    while (1)
    {
        // it'll check for indicators to determine size.
        if (array[i] == NULL)
        {
            return i;
        }
        i++;
    }
}

stringArray InsertString(stringArray array, string item, unsigned long index)
{

    if (item == NULL)
    {
        printf("Error from SoftC: Cannot Insert NULL string into array\n");
        return array;
    }
    long size = SizeStrings(array);
    if (index < 0)
    {
        printf("Error: Index cannot be Negative\n");
        return array;
    }
    index = size < index ? size : index;
    stringArray newArray = malloc(sizeof(string) * (size + 2));

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

    newArray[i++] = NULL;

    free(array);

    return newArray;
}
long FindStringFrom(stringArray array, string item, unsigned long from)
{
    unsigned long size = SizeStrings(array);
    for (unsigned long i = from; i < size; i++)
    {
        if (SIsSame(array[i], item))
        {
            return i;
        }
    }
    return -1;
}
stringArray RemoveString(stringArray array, unsigned long index)
{
    long size = SizeStrings(array);
    if (index < 0)
    {
        printf("Error: Index cannot be Negative\n");
        return array;
    }
    index = size < index ? size : index;
    stringArray newArray = malloc(sizeof(string) * (size));

    long i = 0;
    long j = 0;
    for (; i < size; i++)       // it'll copy whole array except the one on that index
    {
        if (i != index)
        {
            newArray[j++] = array[i];
        }
    }

    newArray[j++] = NULL;

    free(array - 3);

    return newArray;
}

stringArray AppendString(stringArray array, string item)
{
    return InsertString(array, item, SizeStrings(array));
}
long FindString(stringArray array, string item)
{
    return FindStringFrom(array, item, 0);
}
stringArray ReplaceString(stringArray array, string item, unsigned long index)
{
    array = RemoveString(array, index);
    array = InsertString(array, item, index);
    return array;
}
stringArray PopString(stringArray array)
{
    return RemoveString(array, SizeStrings(array) - 1);
}

void logStrings(stringArray array)
{
    long size = SizeStrings(array);
    for (long i = 0; i < size; i++)
    {
        printf("[%ld] \"%s\"\n", i, array[i]);
    }
}
int isSameStrings(stringArray array1, stringArray array2)
{
    unsigned long size1 = SizeStrings(array1);
    unsigned long size2 = SizeStrings(array2);
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

void DeleteStrings(stringArray array)
{
    free(array);
}