dict initDict()
{
    dict Dict = malloc(sizeof(Dict_S));
    Dict->size = 0;
    return Dict;
}

IdentityNode* DGetNode(dict Dict, string key)
{
    IdentityNode* ptr = Dict->firstNode;
    for (int i = 0; i < Dict->size; i++)
    {
        if (SIsSame(ptr->key, key))
        {
            return ptr;
        }
        ptr = ptr->next;
    }
    printf("Unable to find key: \"%s\" in Dictionary\n", key);
    return NULL;
}

int DIdentifyChar(dict Dict, string key, char value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Char = value;
    ptr->valueType = SAssign("char");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyShort(dict Dict, string key, short value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Short = value;
    ptr->valueType = SAssign("short");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyInt(dict Dict, string key, int value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Int = value;
    ptr->valueType = SAssign("int");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyLong(dict Dict, string key, long value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Long = value;
    ptr->valueType = SAssign("long");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyLLong(dict Dict, string key, long long value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.LLong = value;
    ptr->valueType = SAssign("long long");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyFloat(dict Dict, string key, float value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Float = value;
    ptr->valueType = SAssign("float");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyDouble(dict Dict, string key, double value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Double = value;
    ptr->valueType = SAssign("double");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyLDouble(dict Dict, string key, long double value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.LDouble = value;
    ptr->valueType = SAssign("long double");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyString(dict Dict, string key, string value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.String = SAssign(value);
    ptr->valueType = SAssign("string");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyVector(dict Dict, string key, vector value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Vector = VReCreate(value);
    ptr->valueType = SAssign("vector");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyList(dict Dict, string key, list value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.List = LReCreate(value);
    ptr->valueType = SAssign("list");
    Dict->lastNode = ptr;
    Dict->size++;
}
int DIdentifyDict(dict Dict, string key, dict value)
{
    DRemoveIdentity(Dict, key); // it'll remove existing identity, if there's none, it'll do nothing.
    IdentityNode* ptr = malloc(sizeof(IdentityNode));
    if (Dict->firstNode == NULL)
    {
        Dict->firstNode = ptr;
    }
    else 
    {
        Dict->lastNode->next = ptr;
    }
    ptr->key = SAssign(key);
    ptr->value.Dict = DReCreate(value);
    ptr->valueType = SAssign("dict");
    Dict->lastNode = ptr;
    Dict->size++;
}

long DLen(dict Dict)
{ 
    return Dict->size;
}
int DRemoveIdentity(dict Dict, string key)
{
    IdentityNode* ptr = Dict->firstNode;
    IdentityNode* previousPtr = NULL;
    for (int i = 0; i < Dict->size; i++)
    {
        if (SIsSame(ptr->key, key))
        {
            // Removing The Node from the List
            if (previousPtr == NULL) // if it finds key in first Node
            {
                Dict->firstNode = ptr->next;
            }
            else
            {
                previousPtr->next = ptr->next;
            }
            if (i == Dict->size - 1)  // if it removes the last item
            {
                Dict->lastNode = previousPtr;   // than change the last node of dict
            } 
            // free the memory that is allocated by the Node
            if (SIsSame(ptr->valueType, "string"))
            {
                free(ptr->value.String);
            }
            else if (SIsSame(ptr->valueType, "vector"))
            {
                VDelete(ptr->value.Vector);
            }
            else if (SIsSame(ptr->valueType, "list"))
            {
                LDelete(ptr->value.List);
            }
            else if (SIsSame(ptr->valueType, "dict"))
            {
                DDelete(ptr->value.Dict);
            }
            free(ptr->valueType);
            free(ptr->key);
            free(ptr);
            Dict->size--;
            return 0;
        }
        previousPtr = ptr;
        ptr = ptr->next;
    }
}
string DGetValueType(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    return ptr->valueType;
}
void logDict(dict Dict)
{
    IdentityNode* ptr = Dict->firstNode;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->valueType, "char"))
        {
            printf("<char>        %s : %c\n", ptr->key, ptr->value.Char);
        }
        else if (SIsSame(ptr->valueType, "short"))
        {
            printf("<short>       %s : %d\n", ptr->key, ptr->value.Short);
        }
        else if (SIsSame(ptr->valueType, "int"))
        {
            printf("<int>         %s : %d\n", ptr->key, ptr->value.Int);
        }
        else if (SIsSame(ptr->valueType, "long"))
        {
            printf("<long>        %s : %ld\n", ptr->key, ptr->value.Long);
        }
        else if (SIsSame(ptr->valueType, "long long"))
        {
            printf("<long long>   %s : %lld\n", ptr->key, ptr->value.LLong);
        }
        else if (SIsSame(ptr->valueType, "float"))
        {
            printf("<float>       %s : %f\n", ptr->key, ptr->value.Float);
        }
        else if (SIsSame(ptr->valueType, "double"))
        {
            printf("<double>      %s : %f\n", ptr->key, ptr->value.Double);
        } 
        else if (SIsSame(ptr->valueType, "long double"))
        {
            printf("<long double> %s : %Lf\n", ptr->key, ptr->value.LDouble);
        }
        else if (SIsSame(ptr->valueType, "string"))
        {
            printf("<string>      %s : %s\n", ptr->key, ptr->value.String);
        }
        else if (SIsSame(ptr->valueType, "vector"))
        {
            printf("<vector>      %s : { Type: %s, Size: %ld }\n", ptr->key, ptr->value.Vector->type, ptr->value.Vector->size);
        }
        else if (SIsSame(ptr->valueType, "list"))
        {
            printf("<list>        %s : { Size: %ld }n", ptr->key, ptr->value.List->size);
        }
        else if (SIsSame(ptr->valueType, "dict"))
        {
            printf("<dict>        %s : { Size: %ld }n", ptr->key, ptr->value.Dict->size);
        }
        ptr = ptr->next;
    }
}

int DCopyIdentities(dict Dict1, dict Dict2)
{
    IdentityNode* ptr = Dict2->firstNode;
    while(ptr != NULL)
    {
        if (SIsSame(ptr->valueType, "char"))
        {
            DIdentifyChar(Dict1, ptr->key, ptr->value.Char);
        }
        else if (SIsSame(ptr->valueType, "short"))
        {
            DIdentifyShort(Dict1, ptr->key, ptr->value.Short);
        }
        else if (SIsSame(ptr->valueType, "int"))
        {
            DIdentifyInt(Dict1, ptr->key, ptr->value.Int);
        }
        else if (SIsSame(ptr->valueType, "long"))
        {
            DIdentifyLong(Dict1, ptr->key, ptr->value.Long);
        }
        else if (SIsSame(ptr->valueType, "long long"))
        {
            DIdentifyLLong(Dict1, ptr->key, ptr->value.LLong);
        }
        else if (SIsSame(ptr->valueType, "float"))
        {
            DIdentifyFloat(Dict1, ptr->key, ptr->value.Float);
        }
        else if (SIsSame(ptr->valueType, "double"))
        {
            DIdentifyDouble(Dict1, ptr->key, ptr->value.Double);
        }
        else if (SIsSame(ptr->valueType, "long double"))
        {
            DIdentifyLDouble(Dict1, ptr->key, ptr->value.LDouble);
        }
        else if (SIsSame(ptr->valueType, "string"))
        {
            DIdentifyString(Dict1, ptr->key, ptr->value.String);
        }
        else if (SIsSame(ptr->valueType, "vector"))
        {
            DIdentifyVector(Dict1, ptr->key, ptr->value.Vector);
        }
        else if (SIsSame(ptr->valueType, "list"))
        {
            DIdentifyList(Dict1, ptr->key, ptr->value.List);
        }
        else if (SIsSame(ptr->valueType, "dict"))
        {
            DIdentifyDict(Dict1, ptr->key, ptr->value.Dict);
        }
        ptr = ptr->next;
    }
}
int DHasKey(dict Dict, string key)
{
    IdentityNode* ptr = Dict->firstNode;
    for (int i = 0; i < Dict->size; i++)
    {
        if (SIsSame(ptr->key, key))
        {
            return 1; // true
        }
        ptr = ptr->next;
    }
    return 0;   // false
}
int DHaveSameKeys(dict Dict1, dict Dict2)
{
    long size1 = Dict1->size;
    long size2 = Dict2->size;
    if (size1 != size2)
    {
        return 0; // false
    }
    IdentityNode* ptr1 = Dict1->firstNode;
    for (int i = 0; i < size1; i++)
    {
        if (!DHasKey(Dict2, ptr1->key))
        {
            return 0;
        }
        ptr1 = ptr1->next;
    }
    return 1;
}
int DIsSame(dict Dict1, dict Dict2)
{
    long size1 = Dict1->size;
    long size2 = Dict2->size;
    if (size1 != size2)
    {
        return 0; // false
    }
    if (!DHaveSameKeys(Dict1, Dict2))
    {
        return 0;
    }
    IdentityNode* ptr1 = Dict1->firstNode;
    IdentityNode* ptr2;
    for (int i = 0; i < size1; i++)
    {
        ptr2 = DGetNode(Dict2, ptr1->key);
        if (!SIsSame(ptr1->valueType, ptr2->valueType))
        {
            return 0; // false
        }
        if (SIsSame(ptr1->valueType, "char"))
        {
            if (ptr1->value.Char != ptr2->value.Char)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "short"))
        {
            if (ptr1->value.Short != ptr2->value.Short)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "int"))
        {
            if (ptr1->value.Int != ptr2->value.Int)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "long"))
        {
            if (ptr1->value.Long != ptr2->value.Long)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "long long"))
        {
            if (ptr1->value.LLong != ptr2->value.LLong)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "float"))
        {
            if (ptr1->value.Float != ptr2->value.Float)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "double"))
        {
            if (ptr1->value.Double != ptr2->value.Double)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "long double"))
        {
            if (ptr1->value.LDouble != ptr2->value.LDouble)
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "string"))
        {
            if (!SIsSame(ptr1->value.String, ptr2->value.String))
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "vector"))
        {
            if (!VIsSame(ptr1->value.Vector, ptr2->value.Vector))
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "list"))
        {
            if (!LIsSame(ptr1->value.List, ptr2->value.List))
            {
                return 0; // false
            }
        }
        else if (SIsSame(ptr1->valueType, "dict"))
        {
            if (!DIsSame(ptr1->value.Dict, ptr2->value.Dict))
            {
                return 0; // false
            }
        }
        ptr1 = ptr1->next;
    }
    return 1;
}

dict DReCreate(dict Dict)
{
    dict newDict = initDict();
    DCopyIdentities(newDict, Dict);
    return newDict;
}

char DGetChar(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "char"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Char;
}
short DGetShort(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "short"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Short;
}
int DGetInt(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "int"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Int;
}
long DGetLong(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "long"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Long;
}
long long DGetLLong(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "long long"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.LLong;
}
float DGetFloat(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "float"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Float;
}
double DGetDouble(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "double"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Double;
}
long double DGetLDouble(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "long double"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.LDouble;
}
string DGetString(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "string"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.String;
}
vector DGetVector(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "vector"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Vector;
}
list DGetList(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "list"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.List;
}
dict DGetDict(dict Dict, string key)
{
    IdentityNode* ptr = DGetNode(Dict, key);
    if (!SIsSame(ptr->valueType, "dict"))
    {
        printf("key: \"%s\" seems to have %s value, you cannot get that by this function.\n", key, ptr->valueType);
    }
    return ptr->value.Dict;
}

int DDelete(dict Dict)
{
    IdentityNode *ptr = Dict->firstNode;
    free(Dict);
    while (ptr != NULL)
    {
        IdentityNode *tmp = ptr->next;
        if (SIsSame(ptr->valueType, "string"))
        {
            free(ptr->value.String);
        }
        else if (SIsSame(ptr->valueType, "vector"))
        {
            VDelete(ptr->value.Vector);
        }
        else if (SIsSame(ptr->valueType, "list"))
        {
            LDelete(ptr->value.List);
        }
        free(ptr->key);
        free(ptr->valueType);
        free(ptr);
        ptr = tmp;
    }
}