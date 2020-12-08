list initList()
{
    list List = malloc(sizeof(List_S));
    List->size = 0;
    return List;
}

ItemNode* LGetNode(list List, long index)
{
    ItemNode* ptr = List->firstItem;
    if (List->size > 0 && index > (List->size - 1))
    {
        printf("Warning: index (%ld) is either out of range or has negative value. For now, it is forced to last index\n", index);
        index = List->size - 1;
    }
    for (int i = 0; i < index; i++)
    {
        ptr = ptr->next;
    }
    return ptr;
}

int LAppendChar(list List, char item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "char");
    newNode->item.Char = item;
    List->size++;
}
int LAppendShort(list List, short item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "short");
    newNode->item.Short = item;
    List->size++;
}
int LAppendInt(list List, int item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "int");
    newNode->item.Int = item;
    List->size++;
    
}
int LAppendLong(list List, long item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "long");
    newNode->item.Long = item;
    List->size++;
    
}
int LAppendLLong(list List, long long item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "long long");
    newNode->item.LLong = item;
    List->size++;
}
int LAppendFloat(list List, float item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "float");
    newNode->item.Float = item;
    List->size++;
    
}
int LAppendDouble(list List, double item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "double");
    newNode->item.Double = item;
    List->size++;
    
}
int LAppendLDouble(list List, long double item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "long double");
    newNode->item.LDouble = item;
    List->size++;
    
}
int LAppendString(list List, string item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "string");
    newNode->item.String = SAssign(item);
    List->size++;
}
int LAppendVector(list List, vector item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "vector");
    newNode->item.Vector = VReCreate(item);
    List->size++;   
}
int LAppendList(list List, list item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "list");
    newNode->item.List = LReCreate(item);
    List->size++;
}
int LAppendDict(list List, dict item)
{
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (List->firstItem == NULL)
    {
        List->firstItem = newNode;
    }
    else
    {
        List->lastItem->next = newNode;
    }
    List->lastItem = newNode;
    SCopy(newNode->type, "dict");
    newNode->item.Dict = DReCreate(item);
    List->size++;
}

int LInsertChar(list List, char item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendChar(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));    
    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "char");
    newNode->item.Char = item;
    List->size++;
}
int LInsertShort(list List, short item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendShort(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));
    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "short");
    newNode->item.Short = item;
    List->size++;
}
int LInsertInt(list List, int item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendInt(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "int");
    newNode->item.Int = item;
    List->size++;
}
int LInsertLong(list List, long item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendLong(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "long");
    newNode->item.Long = item;
    List->size++;
}
int LInsertLLong(list List, long long item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendLLong(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "long long");
    newNode->item.LLong = item;
    List->size++;
}
int LInsertFloat(list List, float item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendFloat(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "float");
    newNode->item.Float = item;
    List->size++;
}
int LInsertDouble(list List, double item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendDouble(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "double");
    newNode->item.Double = item;
    List->size++;
}
int LInsertLDouble(list List, long double item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendLDouble(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "long double");
    newNode->item.LDouble = item;
    List->size++;
}
int LInsertString(list List, string item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendString(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "string");
    newNode->item.String = SAssign(item);
    List->size++;
}
int LInsertVector(list List, vector item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendVector(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "vector");
    newNode->item.Vector = VReCreate(item);
    List->size++;   
}
int LInsertList(list List, list item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendList(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "list");
    newNode->item.List = LReCreate(item);
    List->size++;
}
int LInsertDict(list List, dict item, long index)
{
    if (List->size == 0 || index >= List->size)
    {
        LAppendDict(List, item);
        return 0;
    }
    ItemNode* newNode = malloc(sizeof(ItemNode));

    if (index == 0)
    {
        newNode->next = List->firstItem;
        List->firstItem = newNode;
    }
    else
    {
        ItemNode* prevptr = LGetNode(List, index - 1);
        newNode->next = prevptr->next;
        prevptr->next = newNode;
    }
    SCopy(newNode->type, "dict");
    newNode->item.Dict = DReCreate(item);
    List->size++;   
}

long LLen(list List)
{
    return List->size;
}
int LRemoveItem(list List, long index)
{
    if (List->size == 0)
        return 0;
    if (index >= (List->size - 1))
    {
        LPop(List);
        return 0;
    }
    if (index == 0)
    {
        ItemNode *thisPtr = List->firstItem;
        List->firstItem = thisPtr->next;
        if (SIsSame(thisPtr->type, "string"))
        {
            free(thisPtr->item.String); // free the string that is allocated by malloc
        }
        else if (SIsSame(thisPtr->type, "vector"))
        {
            VDelete(thisPtr->item.Vector);
        }
        else if (SIsSame(thisPtr->type, "list"))
        {
            LDelete(thisPtr->item.List);
        }
        else if (SIsSame(thisPtr->type, "dict"))
        {
            DDelete(thisPtr->item.Dict);
        }
        free(thisPtr);  // free the node
    }
    else
    {
        ItemNode *previousPtr = LGetNode(List, index - 1);
        ItemNode *thisPtr = previousPtr->next;  
        previousPtr->next = thisPtr->next;
        if (SIsSame(thisPtr->type, "string"))
        {
            free(thisPtr->item.String); // free the string that is allocated by malloc
        }
        else if (SIsSame(thisPtr->type, "vector"))
        {
            VDelete(thisPtr->item.Vector);
        }
        else if (SIsSame(thisPtr->type, "list"))
        {
            LDelete(thisPtr->item.List);
        }
        else if (SIsSame(thisPtr->type, "dict"))
        {
            DDelete(thisPtr->item.Dict);
        }
        free(thisPtr);  // free the node
    }
    List->size--; 
}
string LGetType(list List, long index)
{
    ItemNode* thisptr = LGetNode(List, index);
    return thisptr->type;
}
void LPop(list List)
{
    ItemNode *SecondLastNode = LGetNode(List, List->size - 2);
    ItemNode *thisPtr = SecondLastNode->next;
    if (SIsSame(thisPtr->type, "string"))
    {
        free(thisPtr->item.String);
    }
    else if (SIsSame(thisPtr->type, "vector"))
    {
        VDelete(thisPtr->item.Vector);
    }
    else if (SIsSame(thisPtr->type, "list"))
    {
        LDelete(thisPtr->item.List);
    }
    else if (SIsSame(thisPtr->type, "dict"))
    {
        DDelete(thisPtr->item.Dict);
    }
    free(thisPtr);     // free the node
    SecondLastNode->next = NULL;
    List->size--;
    List->lastItem = SecondLastNode;
}
void logList(list List)
{
    ItemNode* ptr = List->firstItem;
    for (int i = 0; i < List->size; i++)
    {
        if (SIsSame(ptr->type, "char"))
        {
            printf("[%d] <char>        %c \t \n", i, ptr->item.Char);
        }
        else if (SIsSame(ptr->type, "short"))
        {
            printf("[%d] <short>       %d \t \n", i, ptr->item.Short);
        }
        else if (SIsSame(ptr->type, "int"))
        {
            printf("[%d] <int>         %d \t \n", i, ptr->item.Int);
        }
        else if (SIsSame(ptr->type, "long"))
        {
            printf("[%d] <long>        %ld \t \n", i, ptr->item.Long);
        }
        else if (SIsSame(ptr->type, "long long"))
        {
            printf("[%d] <long long>   %lld \t \n", i, ptr->item.LLong);
        }
        else if (SIsSame(ptr->type, "float"))
        {
            printf("[%d] <float>       %f \t \n", i, ptr->item.Float);
        }
        else if (SIsSame(ptr->type, "double"))
        {
            printf("[%d] <double>      %f \t \n", i, ptr->item.Double);
        }
        else if (SIsSame(ptr->type, "long double"))
        {
            printf("[%d] <long double> %Lf \t \n", i, ptr->item.LDouble);
        }
        else if (SIsSame(ptr->type, "string"))
        {
            printf("[%d] <string>      %s \t \n", i, ptr->item.String);
        }
        else if (SIsSame(ptr->type, "vector"))
        {
            printf("[%i] <vector>      { Type: %s, Size: %ld }\n", i, ptr->item.Vector->type, ptr->item.Vector->size);
        }
        else if (SIsSame(ptr->type, "list"))
        {
            printf("[%i] <list>        { Size: %ld }\n", i, ptr->item.List->size);
        }
        else if (SIsSame(ptr->type, "dict"))
        {
            printf("[%i] <dict>        { Size: %ld }\n", i, ptr->item.Dict->size);
        }
        ptr = ptr->next;
    }
}
int LIsSame(list List1, list List2)
{
    long size1 = List1->size;
    long size2 = List2->size;
    if (size1 != size2)
    {
        return 0; // false
    }
    ItemNode* ptr1 = List1->firstItem;
    ItemNode* ptr2 = List2->firstItem;
    for (int i = 0; i < size1; i++)
    {
        if (!SIsSame(ptr1->type, ptr2->type)) // if type is not same
        {
            return 0; // false
        }
        if (SIsSame(ptr1->type, "char"))
        {
            if (ptr1->item.Char != ptr2->item.Char)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "short"))
        {
            if (ptr1->item.Short != ptr2->item.Short)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "int"))
        {
            if (ptr1->item.Int != ptr2->item.Int)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "long"))
        {
            if (ptr1->item.Long != ptr2->item.Long)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "long long"))
        {
            if (ptr1->item.LLong != ptr2->item.LLong)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "float"))
        {
            if (ptr1->item.Float != ptr2->item.Float)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "double"))
        {
            if (ptr1->item.Double != ptr2->item.Double)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "long double"))
        {
            if (ptr1->item.LDouble != ptr2->item.LDouble)
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "string"))
        {
            if (!SIsSame(ptr1->item.String, ptr2->item.String))
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "vector"))
        {
            if (!VIsSame(ptr1->item.Vector, ptr2->item.Vector))
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "list"))
        {
            if (!LIsSame(ptr1->item.List, ptr2->item.List))
            {
                return 0;
            }
        }
        else if(SIsSame(ptr1->type, "dict"))
        {
            if (!DIsSame(ptr1->item.Dict, ptr2->item.Dict))
            {
                return 0;
            }
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return 1; // true

}
int LCopy(list List1, list List2)
{
    long size2 = List2->size;
    ItemNode* ptr2 = List2->firstItem;
    for (int i = 0; i < size2; i++)
    {
        if (SIsSame(ptr2->type, "char"))
        {
            LAppendChar(List1, ptr2->item.Char);
        }
        else if (SIsSame(ptr2->type, "short"))
        {
            LAppendShort(List1, ptr2->item.Short);
        }
        else if (SIsSame(ptr2->type, "int"))
        {
            LAppendInt(List1, ptr2->item.Int);
        }
        else if (SIsSame(ptr2->type, "long"))
        {
            LAppendLong(List1, ptr2->item.Long);
        }
        else if (SIsSame(ptr2->type, "long long"))
        {
            LAppendLLong(List1, ptr2->item.LLong);
        }
        else if (SIsSame(ptr2->type, "float"))
        {
            LAppendFloat(List1, ptr2->item.Float);
        }
        else if (SIsSame(ptr2->type, "double"))
        {
            LAppendDouble(List1, ptr2->item.Double);
        }
        else if (SIsSame(ptr2->type, "long double"))
        {
            LAppendLDouble(List1, ptr2->item.LDouble);
        }
        else if (SIsSame(ptr2->type, "string"))
        {
            LAppendString(List1, ptr2->item.String);
        }
        else if (SIsSame(ptr2->type, "vector"))
        {
            LAppendVector(List1, ptr2->item.Vector);
        }
        else if (SIsSame(ptr2->type, "list"))
        {
            LAppendList(List1, ptr2->item.List);
        }
        else if (SIsSame(ptr2->type, "dict"))
        {
            LAppendDict(List1, ptr2->item.Dict);
        }
        ptr2 = ptr2->next;
    }
}

list LReCreate(list List)
{
    list newList = initList();
    LCopy(newList, List);
    return newList;
}

void LReplaceChar(list List, char item, long index)
{
    LRemoveItem(List, index);
    LInsertChar(List, item, index);
}
void LReplaceShort(list List, short item, long index)
{
    LRemoveItem(List, index);
    LInsertShort(List, item, index);
}
void LReplaceInt(list List, int item, long index)
{
    LRemoveItem(List, index);
    LInsertInt(List, item, index);
}
void LReplaceLong(list List, long item, long index)
{
    LRemoveItem(List, index);
    LInsertLong(List, item, index);
}
void LReplaceLLong(list List, long long item, long index)
{
    LRemoveItem(List, index);
    LInsertLLong(List, item, index);
}
void LReplaceFloat(list List, float item, long index)
{
    LRemoveItem(List, index);
    LInsertFloat(List, item, index);
}
void LReplaceDouble(list List, double item, long index)
{
    LRemoveItem(List, index);
    LInsertDouble(List, item, index);
}
void LReplaceLDouble(list List, long double item, long index)
{
    LRemoveItem(List, index);
    LInsertLDouble(List, item, index);
}
void LReplaceString(list List, string item, long index)
{
    LRemoveItem(List, index);
    LInsertString(List, item, index);
}
void LReplaceVector(list List, vector item, long index)
{
    LRemoveItem(List, index);
    LInsertVector(List, item, index);
}
void LReplaceList(list List, list item, long index)
{
    LRemoveItem(List, index);
    LInsertList(List, item, index);
}
void LReplaceDict(list List, dict item, long index)
{
    LRemoveItem(List, index);
    LInsertDict(List, item, index);
}

long LFindCharFrom(list List, char item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "char"))
        {
            if (ptr->item.Char == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindShortFrom(list List, short item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "short"))
        {
            if (ptr->item.Short == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindIntFrom(list List, int item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "int"))
        {
            if (ptr->item.Int == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindLongFrom(list List, long item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "long"))
        {
            if (ptr->item.Long == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindLLongFrom(list List, long long item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "long long"))
        {
            if (ptr->item.LLong == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindFloatFrom(list List, float item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "float"))
        {
            if (ptr->item.Float == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindDoubleFrom(list List, double item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "double"))
        {
            if (ptr->item.Double == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindLDoubleFrom(list List, long double item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "long double"))
        {
            if (ptr->item.LDouble == item)
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindStringFrom(list List, string item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "string"))
        {
            if (SIsSame(ptr->item.String, item))
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindVectorFrom(list List, vector item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "vector"))
        {
            if (VIsSame(ptr->item.Vector, item))
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindListFrom(list List, list item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "list"))
        {
            if (LIsSame(ptr->item.List, item))
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}
long LFindDictFrom(list List, dict item, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    long i = index;
    while (ptr != NULL)
    {
        if (SIsSame(ptr->type, "dict"))
        {
            if (DIsSame(ptr->item.Dict, item))  
            {
                return i;
            }
        }
        ptr = ptr->next;
        i++;
    }
    return -1;
}

long LFindChar(list List, char item)
{
    return LFindCharFrom(List, item, 0);
}
long LFindShort(list List, short item)
{
    return LFindShortFrom(List, item, 0);
}
long LFindInt(list List, int item)
{
    return LFindIntFrom(List, item, 0);
}
long LFindLong(list List, long item)
{
    return LFindLongFrom(List, item, 0);
}
long LFindLLong(list List, long long item)
{
    return LFindLLongFrom(List, item, 0);
}
long LFindFloat(list List, float item)
{
    return LFindFloatFrom(List, item, 0);
}
long LFindDouble(list List, double item)
{
    return LFindDoubleFrom(List, item, 0);
}
long LFindLDouble(list List, long double item)
{
    return LFindLDoubleFrom(List, item, 0);
}
long LFindString(list List, string item)
{
    return LFindStringFrom(List, item, 0);
}
long LFindVector(list List, vector item)
{
    return LFindVectorFrom(List, item, 0);
}
long LFindList(list List, list item)
{
    return LFindListFrom(List, item, 0);
}
long LFindDict(list List, dict item)
{
    return LFindDictFrom(List, item, 0);
}

char LGetChar(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "char"))
    {
        printf("we found %s item at index %ld, you cannot use LGetChar function to get that.\n", ptr->type, index);
    }
    return ptr->item.Char;
}
short LGetShort(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "short"))
    {
        printf("we found %s item at index %ld, you cannot use LGetShort function to get that.\n", ptr->type, index);
    }
    return ptr->item.Short;
}
int LGetInt(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "int"))
    {
        printf("we found %s item at index %ld, you cannot use LGetInt function to get that.\n", ptr->type, index);
    }
    return ptr->item.Int;
}
long LGetLong(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "long"))
    {
        printf("we found %s item at index %ld, you cannot use LGetLong function to get that.\n", ptr->type, index);
    }
    return ptr->item.Long;
}
long long LGetLLong(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "long long"))
    {
        printf("we found %s item at index %ld, you cannot use LGetLLong function to get that.\n", ptr->type, index);
    }
    return ptr->item.LLong;
}
float LGetFloat(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "float"))
    {
        printf("we found %s item at index %ld, you cannot use LGetFloat function to get that.\n", ptr->type, index);
    }
    return ptr->item.Float;
}
double LGetDouble(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "double"))
    {
        printf("we found %s item at index %ld, you cannot use LGetDouble function to get that.\n", ptr->type, index);
    }
    return ptr->item.Double;
}
long double LGetLDouble(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "long double"))
    {
        printf("we found %s item at index %ld, you cannot use LGetLDouble function to get that.\n", ptr->type, index);
    }
    return ptr->item.LDouble;
}
string LGetString(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "string"))
    {
        printf("we found %s item at index %ld, you cannot use LGetString function to get that.\n", ptr->type, index);
    }
    return ptr->item.String;
}
vector LGetVector(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "vector"))
    {
        printf("we found %s item at index %ld, you cannot use LGetVector function to get that.\n", ptr->type, index);
    }
    return ptr->item.Vector;
}
list LGetList(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "list"))
    {
        printf("we found %s item at index %ld, you cannot use LGetList function to get that.\n", ptr->type, index);
    }
    return ptr->item.List;
}
dict LGetDict(list List, long index)
{
    ItemNode* ptr = LGetNode(List, index);
    if (!SIsSame(ptr->type, "dict"))
    {
        printf("we found %s item at index %ld, you cannot use LGetDict function to get that.\n", ptr->type, index);
    }
    return ptr->item.Dict;
}

int LDelete(list List)
{
    ItemNode *ptr = List->firstItem;
    free(List);
    while (ptr != NULL)
    {
        ItemNode *tmp = ptr->next;
        if (SIsSame(ptr->type, "string"))
        {
            free(ptr->item.String);
        }
        else if (SIsSame(ptr->type, "vector"))
        {
            VDelete(ptr->item.Vector);
        }
        else if (SIsSame(ptr->type, "list"))
        {
            LDelete(ptr->item.List);
        }
        free(ptr);
        ptr = tmp;
    }
    return 0;
}