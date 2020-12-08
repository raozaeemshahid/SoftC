long SLen(string s)
{
    int i = 0;
    for(; s[i] != '\0'; i++);
    return i;
}

string SAssign(string source)
{
    char* newS = malloc(SLen(source) + 1);
    SCopy(newS, source);
    return newS;    
}

string SReAssign(string previousStr, string source)
{
    free(previousStr);
    char* newS = malloc(SLen(source) + 1);
    SCopy(newS, source);
    return newS;
}

string SSlice(string source, int startIndex, int endIndex)
{
    if (startIndex < 0 || endIndex < 0)
    {
        printf("Error: Negative index is not allowed in slicing\n");
        return NULL;
    }
    if (startIndex > endIndex)
    {
        printf("Error: Starting position should not be greator than Ending Position");
        return NULL;
    }
    int size = SLen(source);
    endIndex = endIndex > size ? size: endIndex;          // if index is greator than size of string
    startIndex = startIndex > size ? size : startIndex;   // than maximize them to size of string
    
    int newSize = endIndex - startIndex;
    string newString = malloc(sizeof(newSize + 1));
    int i = startIndex, j = 0;
    while (i < endIndex)
    {
        newString[j++] = source[i++];
    }
    newString[j++] = '\0';
    return newString;
}

string SJoin(string S1, string S2)
{
    string newS = malloc(SLen(S1) + SLen(S2) + 1);

    int i = 0;
    for (; S1[i] != '\0'; i++)
    {
        newS[i] = S1[i];
    }

    int j = 0;
    for (; S2[j] != '\0'; j++, i++)
    {
        newS[i] = S2[j];
    }

    newS[i] = '\0';
    
    return newS;
}

string SStrip(string source)
{
    int size = SLen(source);
    int NoFirstSpaces = 0;
    int NoLastSpaces = 0;
    for (int i = 0; source[i] == ' '; i++)
    {
        NoFirstSpaces++;
    }
    for (int i = size - 1; source[i] == ' '; i--)
    {
        NoLastSpaces++;
    }
    
    int newSize = size - NoFirstSpaces - NoLastSpaces;
    string newString = malloc(newSize);
    int j = 0;
    for (int i = NoFirstSpaces; source[i + NoLastSpaces] != '\0'; i++)
    {
        newString[j++] = source[i];
    }
    newString[j++] = '\0';
    return newString;
}

string input()
{
    vector CVector = InitVectorOfChar();
    char c;
    while ((c = getchar()) != '\n')
    {
        VAppendChar(CVector, c);
    }

    char* newS = malloc(CVector->size + 1);

    int i = 0;
    for (; i < CVector->size; i++)
    {
        newS[i] = VGetChar(CVector, i);
    }
    newS[i] = '\0';

    VDelete(CVector);

    return newS;
}

void SReverse(string source)
{
    int size = SLen(source);
    string prototype = malloc(size);
    SCopy(prototype, source);       // saving a copy before reversing the original one

    int i = size - 1;
    int j = 0;
    while (i >= 0)
    {
        source[j++] = prototype[i--];
    }
    source[j++] = '\0';
    free(prototype);
}
void STrim(string source, int startIndex, int endIndex)
{
    string trimmed = SSlice(source, startIndex, endIndex);
    SCopy(source, trimmed);
    free(trimmed);
}
void STitle(string source)
{
    int size = SLen(source);
    string prototype = malloc(size);
    SCopy(prototype, source);       // saving a copy before modifying the original one

    int i = 0;
    int capitalize = 1;
    for (; i < size; i++)
    {
        if (capitalize)
        {
            source[i] = CToUpper(prototype[i]);
            capitalize = 0;
        }
        else if (prototype[i] == ' ')
        {
            source[i] = ' ';
            capitalize = 1; // capitalize the next character
        }
        else
        {
            source[i] = CToLower(prototype[i]);
        }
    }
    source[i] = '\0';
    free(prototype);
}
void SToUpper(string source)
{   
    int size = SLen(source);
    string prototype = malloc(size);
    SCopy(prototype, source);       // saving a copy before modifying the original one

    int i = 0;
    for (; prototype[i] != '\0'; i++)
    {
        source[i] = CToUpper(prototype[i]);
    }
    source[i] = '\0';
    free(prototype);
}
void SToLower(string source)
{   
    int size = SLen(source);
    string prototype = malloc(size);
    SCopy(prototype, source);       // saving a copy before modifying the original one

    int i = 0;
    for (; prototype[i] != '\0'; i++)
    {
        source[i] = CToLower(prototype[i]);
    }
    source[i] = '\0';
    free(prototype);
}

int SIsUpper(string source)
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        if (CIsLower(source[i]))
        {
            return 0;
        }
    }
    return 1;
}
int SIsLower(string source)
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        if (CIsUpper(source[i]))
        {
            return 0;
        }
    }
    return 1;
}

int SIsSame(string S1, string S2)
{
    if (SLen(S1) != SLen(S2))
    {
        return 0;
    }
    for (int i = 0; S1[i] != '\0'; i++)
    {
        if (S1[i] != S2[i])
        {
            return 0;
        }
    }
    return 1;
}

void SCopy(string S1, string S2)
{
    int i = 0;
    for (; S2[i] != '\0'; i++)
    {
        S1[i] = S2[i];
    }
    S1[i] = '\0';
}

int SFindCharFrom(string source, char c, int index)
{
    int size = SLen(source);
    index = index > size ? size: index;
    index = index < 0 ? 0: index;
    for (int i = index; source[i] != '\0'; i++)    
    {
        if (source[i] == c)
        {
            return i;
        }
    }
    return -1;
}
int SFindChar(string source, char c)
{
    return SFindCharFrom(source, c, 0);
}
int SFindStr(string source, string str)
{
    for (int i = 0; source[i] != '\0'; i++)    
    {
        if (source[i] == str[0])
        {
            int same = 1;
            for (int j = 0; str[j] != '\0'; j++)
            {
                if (source[i + j] != str[j])
                {
                    same = 0;
                }
            }
            if (same)
            {
                return i;
            }
        }
    }
    return -1;
}
int SCountChar(string source, char c)
{
    int count = 0;
    for (int i = 0; source[i] != '\0'; i++)
    {
        if (source[i] == c)
        {
            count++;
        }
    }
    return count;
}

int Sisdigits(string source)
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        if (!(source[i] >= 48 && source[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}
int Sisdecimal(string source)
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        if (!(source[i] >= 48 && source[i] <= 57) && source[i] != '.')
        {
            return 0;
        }
    }
    return 1;
}