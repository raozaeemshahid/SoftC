vector InitVectorOfChar()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "char");
    list->size = 0;
    return list;
}
vector InitVectorOfShort()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "short");
    list->size = 0;
    return list;
}
vector InitVectorOfInt()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "int");
    list->size = 0;
    return list;
}
vector InitVectorOfLong()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "long");
    list->size = 0;
    return list;
}
vector InitVectorOfLLong()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "long long");
    list->size = 0;
    return list;
}
vector InitVectorOfFloat()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "float");
    list->size = 0;
    return list;
}
vector InitVectorOfDouble()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "double");
    list->size = 0;
    return list;
}
vector InitVectorOfLDouble()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "long double");
    list->size = 0;
    return list;
}
vector InitVectorOfString()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "string");
    list->size = 0;
    return list;
}
vector InitVectorOfVector()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "vector");
    list->size = 0;
    return list;
}
vector InitVectorOfList()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "list");
    list->size = 0;
    return list;
}
vector InitVectorOfDict()
{
    vector list = malloc(sizeof(Vector_S));
    SCopy(list->type, "dict");
    list->size = 0;
    return list;
}

CharNode* VGetCharNode(vector List, long index)
{
    if (!SIsSame(List->type, "char"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    CharNode* ptr = List->firstNode.CharNode;
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
ShortNode* VGetShortNode(vector List, long index)
{
    if (!SIsSame(List->type, "short"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    ShortNode* ptr = List->firstNode.ShortNode;
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
IntNode* VGetIntNode(vector List, long index)
{
    if (!SIsSame(List->type, "int"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    IntNode* ptr = List->firstNode.IntNode;
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
LongNode* VGetLongNode(vector List, long index)
{
    if (!SIsSame(List->type, "long"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    LongNode* ptr = List->firstNode.LongNode;
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
LongLongNode* VGetLLongNode(vector List, long index)
{
    if (!SIsSame(List->type, "long long"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    LongLongNode* ptr = List->firstNode.LongLongNode;
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
FloatNode* VGetFloatNode(vector List, long index)
{
    if (!SIsSame(List->type, "float"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    FloatNode* ptr = List->firstNode.FloatNode;
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
DoubleNode* VGetDoubleNode(vector List, long index)
{
    if (!SIsSame(List->type, "double"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    DoubleNode* ptr = List->firstNode.DoubleNode;
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
LongDoubleNode* VGetLDoubleNode(vector List, long index)
{
    if (!SIsSame(List->type, "long double"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    LongDoubleNode* ptr = List->firstNode.LongDoubleNode;
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
StringNode* VGetStringNode(vector List, long index)
{
    if (!SIsSame(List->type, "string"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    StringNode* ptr = List->firstNode.StringNode;
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
VectorNode* VGetVectorNode(vector List, long index)
{
    if (!SIsSame(List->type, "vector"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    VectorNode* ptr = List->firstNode.VectorNode;
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
ListNode* VGetListNode(vector List, long index)
{
    if (!SIsSame(List->type, "list"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    ListNode* ptr = List->firstNode.ListNode;
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
DictNode* VGetDictNode(vector List, long index)
{
    if (!SIsSame(List->type, "dict"))
    {
        printf("you vector type (%s) doesn't match with the function you called.\n", List->type);
    }
    DictNode* ptr = List->firstNode.DictNode;
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

int VAppendChar(vector List, char item)
{
    if (!SIsSame(List->type, "char"))
    {
        printf("Cannot append Char in Vector of type %s\n", List->type);
        return 1;
    }
    CharNode *ptr = malloc(sizeof(CharNode));
    if (List->firstNode.CharNode == NULL)
    {
        List->firstNode.CharNode = ptr;
    }
    else
    {
        List->lastNode.CharNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.CharNode = ptr;
    List->size++;
    return 0;
}
int VAppendShort(vector List, short item)   
{
    if (!SIsSame(List->type, "short"))
    {
        printf("Cannot append Short in Vector of type %s\n", List->type);
        return 1;
    }
    ShortNode *ptr = malloc(sizeof(ShortNode));
    if (List->firstNode.ShortNode == NULL)
    {
        List->firstNode.ShortNode = ptr;
    }
    else
    {
        List->lastNode.ShortNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.ShortNode = ptr;
    List->size++;
    return 0;
}
int VAppendInt(vector List, int item)
{
    if (!SIsSame(List->type, "int"))
    {
        printf("Cannot append Int in Vector of type %s\n", List->type);
        return 1;
    }
    IntNode *ptr = malloc(sizeof(IntNode));
    if (List->firstNode.IntNode == NULL)
    {
        List->firstNode.IntNode = ptr;
    }
    else
    {
        List->lastNode.IntNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.IntNode = ptr;
    List->size++;
    return 0;
}
int VAppendLong(vector List, long item)
{
    if (!SIsSame(List->type, "long"))
    {
        printf("Cannot append long in Vector of type %s\n", List->type);
        return 1;
    }
    LongNode *ptr = malloc(sizeof(LongNode));
    if (List->firstNode.LongNode == NULL)
    {
        List->firstNode.LongNode = ptr;
    }
    else
    {
        List->lastNode.LongNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.LongNode = ptr;
    List->size++;
    return 0;
}
int VAppendLLong(vector List, long long item)
{
    if (!SIsSame(List->type, "long long"))
    {
        printf("Cannot append long long in Vector of type %s\n", List->type);
        return 1;
    }
    LongLongNode *ptr = malloc(sizeof(LongLongNode));
    if (List->firstNode.LongLongNode == NULL)
    {
        List->firstNode.LongLongNode = ptr;
    }
    else
    {
        List->lastNode.LongLongNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.LongLongNode = ptr;
    List->size++;
    return 0;
}
int VAppendFloat(vector List, float item)
{
    if (!SIsSame(List->type, "float"))
    {
        printf("Cannot append float in Vector of type %s\n", List->type);
        return 1;
    }
    FloatNode *ptr = malloc(sizeof(FloatNode));
    if (List->firstNode.FloatNode == NULL)
    {
        List->firstNode.FloatNode = ptr;
    }
    else
    {
        List->lastNode.FloatNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.FloatNode = ptr;
    List->size++;
    return 0;
}
int VAppendDouble(vector List, double item)
{
    if (!SIsSame(List->type, "double"))
    {
        printf("Cannot append Double in Vector of type %s\n", List->type);
        return 1;
    }
    DoubleNode *ptr = malloc(sizeof(DoubleNode));
    if (List->firstNode.DoubleNode == NULL)
    {
        List->firstNode.DoubleNode = ptr;
    }
    else
    {
        List->lastNode.DoubleNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.DoubleNode = ptr;
    List->size++;
    return 0;
}
int VAppendLDouble(vector List, long double item)
{
    if (!SIsSame(List->type, "long double"))
    {
        printf("Cannot append long double in Vector of type %s\n", List->type);
        return 1;
    }
    LongDoubleNode *ptr = malloc(sizeof(LongDoubleNode));
    if (List->firstNode.LongDoubleNode == NULL)
    {
        List->firstNode.LongDoubleNode = ptr;
    }
    else
    {
        List->lastNode.LongDoubleNode->next = ptr;
    }
    ptr->item = item;
    List->lastNode.LongDoubleNode = ptr;
    List->size++;
    return 0;
}
int VAppendString(vector List, string item)
{
    if (!SIsSame(List->type, "string"))
    {
        printf("Cannot append String in Vector of type %s\n", List->type);
        return 1;
    }
    StringNode *ptr = malloc(sizeof(StringNode));
    if (List->firstNode.StringNode == NULL)
    {
        List->firstNode.StringNode = ptr;
    }
    else
    {
        List->lastNode.StringNode->next = ptr;
    }
    ptr->item = SAssign(item);          // creates new string by malloc
    List->lastNode.StringNode = ptr;
    List->size++;
    return 0;
}
int VAppendVector(vector List, vector item)
{
    if (!SIsSame(List->type, "vector"))
    {
        printf("Cannot append Vector in Vector of type %s\n", List->type);
        return 1;
    }
    VectorNode *ptr = malloc(sizeof(VectorNode));
    if (List->firstNode.VectorNode == NULL)
    {
        List->firstNode.VectorNode = ptr;
    }
    else
    {
        List->lastNode.VectorNode->next = ptr;
    }
    ptr->item = VReCreate(item);        // reacreates means allocate new memory for vector and create a exact copy
    List->lastNode.VectorNode = ptr;
    List->size++;
    return 0;
}
int VAppendList(vector List, list item)
{
    if (!SIsSame(List->type, "list"))
    {
        printf("Cannot append list in Vector of type %s\n", List->type);
        return 1;
    }
    ListNode *ptr = malloc(sizeof(ListNode));
    if (List->firstNode.ListNode == NULL)
    {
        List->firstNode.ListNode = ptr;
    }
    else
    {
        List->lastNode.ListNode->next = ptr;
    }
    ptr->item = LReCreate(item);        // reacreates list means allocate new memory for vector and create a exact copy
    List->lastNode.ListNode = ptr;
    List->size++;
    return 0;
}
int VAppendDict(vector List, dict item)
{
    if (!SIsSame(List->type, "dict"))
    {
        printf("Cannot append dict in Vector of type %s\n", List->type);
        return 1;
    }
    DictNode *ptr = malloc(sizeof(DictNode));
    if (List->firstNode.DictNode == NULL)
    {
        List->firstNode.DictNode = ptr;
    }
    else
    {
        List->lastNode.DictNode->next = ptr;
    }
    ptr->item = DReCreate(item);        // reacreates dict means allocate new memory for dict and create a exact copy
    List->lastNode.DictNode = ptr;
    List->size++;
    return 0;
}

int VInsertChar(vector List, char item, long index)
{
    if (!SIsSame(List->type, "char"))
    {
        printf("Cannot insert char in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendChar(List, item);
        return 0;
    }
    CharNode *ptr = malloc(sizeof(CharNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.CharNode;
        List->firstNode.CharNode = ptr;
    }
    else 
    {
        CharNode* NodePtr = VGetCharNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertShort(vector List, short item, long index)
{
    if (!SIsSame(List->type, "short"))
    {
        printf("Cannot insert short in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendShort(List, item);
        return 0;
    }
    ShortNode *ptr = malloc(sizeof(ShortNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.ShortNode;
        List->firstNode.ShortNode = ptr;
    }
    else 
    {
        ShortNode* NodePtr = VGetShortNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertInt(vector List, int item, long index)
{
    if (!SIsSame(List->type, "int"))
    {
        printf("Cannot insert int in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendInt(List, item);
        return 0;
    }
    IntNode *ptr = malloc(sizeof(IntNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.IntNode;
        List->firstNode.IntNode = ptr;
    }
    else 
    {
        IntNode* NodePtr = VGetIntNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertLong(vector List, long item, long index)
{
    if (!SIsSame(List->type, "long"))
    {
        printf("Cannot insert long in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendLong(List, item);
        return 0;
    }
    LongNode *ptr = malloc(sizeof(LongNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.LongNode;
        List->firstNode.LongNode = ptr;
    }
    else 
    {
        LongNode* NodePtr = VGetLongNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertLLong(vector List, long long item, long index)
{
    if (!SIsSame(List->type, "long long"))
    {
        printf("Cannot insert long long in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendLLong(List, item);
        return 0;
    }
    LongLongNode *ptr = malloc(sizeof(LongLongNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.LongLongNode;
        List->firstNode.LongLongNode = ptr;
    }
    else 
    {
        LongLongNode* NodePtr = VGetLLongNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertFloat(vector List, float item, long index)
{
    if (!SIsSame(List->type, "float"))
    {
        printf("Cannot insert float in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendFloat(List, item);
        return 0;
    }
    FloatNode *ptr = malloc(sizeof(FloatNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.FloatNode;
        List->firstNode.FloatNode = ptr;
    }
    else 
    {
        FloatNode* NodePtr = VGetFloatNode(List, index - 1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertDouble(vector List, double item, long index)
{
    if (!SIsSame(List->type, "double"))
    {
        printf("Cannot insert double in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendDouble(List, item);
        return 0;
    }
    DoubleNode *ptr = malloc(sizeof(DoubleNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.DoubleNode;
        List->firstNode.DoubleNode = ptr;
    }
    else 
    {
        DoubleNode* NodePtr = VGetDoubleNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertLDouble(vector List, long double item, long index)
{
    if (!SIsSame(List->type, "long double"))
    {
        printf("Cannot insert long double in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendLDouble(List, item);
        return 0;
    }
    LongDoubleNode *ptr = malloc(sizeof(LongDoubleNode));
    ptr->item = item;
    if (index == 0)
    {
        ptr->next = List->firstNode.LongDoubleNode;
        List->firstNode.LongDoubleNode = ptr;
    }
    else 
    {
        LongDoubleNode* NodePtr = VGetLDoubleNode(List, index-1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertString(vector List, string item, long index)
{
    if (!SIsSame(List->type, "string"))
    {
        printf("Cannot insert string in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendString(List, item);
        return 0;
    }
    StringNode *ptr = malloc(sizeof(StringNode));
    ptr->item = SAssign(item);  // creates string by malloc
    if (index == 0)
    {
        ptr->next = List->firstNode.StringNode;
        List->firstNode.StringNode = ptr;
    }
    else 
    {
        StringNode* NodePtr = VGetStringNode(List, index - 1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertVector(vector List, vector item, long index)
{
    if (!SIsSame(List->type, "vector"))
    {
        printf("Cannot insert vector in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendVector(List, item);
        return 0;
    }
    VectorNode *ptr = malloc(sizeof(VectorNode));
    ptr->item = VReCreate(item);        // allocate new memory and create a exact copy
    if (index == 0)
    {
        ptr->next = List->firstNode.VectorNode;
        List->firstNode.VectorNode = ptr;
    }
    else 
    {
        VectorNode* NodePtr = VGetVectorNode(List, index - 1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertList(vector List, list item, long index)
{
    index = index < 0 ? 0: index;
    if (!SIsSame(List->type, "list"))
    {
        printf("Cannot insert list in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendList(List, item);
        return 0;
    }
    ListNode *ptr = malloc(sizeof(ListNode));
    ptr->item = LReCreate(item);        // allocate new memory and create a exact copy
    if (index == 0)
    {
        ptr->next = List->firstNode.ListNode;
        List->firstNode.ListNode = ptr;
    }
    else 
    {
        ListNode* NodePtr = VGetListNode(List, index - 1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}
int VInsertDict(vector List, dict item, long index)
{
    index = index < 0 ? 0: index;
    if (!SIsSame(List->type, "dict"))
    {
        printf("Cannot insert dict in Vector of type %s\n", List->type);
        return 1;
    }
    if (List->size == 0 || index >= List->size)
    {
        VAppendDict(List, item);
        return 0;
    }
    DictNode *ptr = malloc(sizeof(DictNode));
    ptr->item = DReCreate(item);        // allocate new memory and create a exact copy
    if (index == 0)
    {
        ptr->next = List->firstNode.DictNode;
        List->firstNode.DictNode = ptr;
    }
    else 
    {
        DictNode* NodePtr = VGetDictNode(List, index - 1);
        ptr->next = NodePtr->next;
        NodePtr->next = ptr;
    }
    List->size++;
}

int VPop(vector List)
{
    if (List == NULL || List->size == 0)
        return 0;
    else if (SIsSame(List->type, "char"))
    {
        CharNode *SecondLastPtr = VGetCharNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.CharNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "short"))
    {
        ShortNode *SecondLastPtr = VGetShortNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.ShortNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "int"))
    {
        IntNode *SecondLastPtr = VGetIntNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.IntNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "long"))
    {
        LongNode *SecondLastPtr = VGetLongNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.LongNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "long long"))
    {
        LongLongNode *SecondLastPtr = VGetLLongNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.LongLongNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "float")) 
    {
        FloatNode *SecondLastPtr = VGetFloatNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.FloatNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "double")) 
    {
        DoubleNode *SecondLastPtr = VGetDoubleNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.DoubleNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "long double"))
    {
        LongDoubleNode *SecondLastPtr = VGetLDoubleNode(List, List->size - 2);
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.LongDoubleNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "string"))
    {
        StringNode *SecondLastPtr = VGetStringNode(List, List->size - 2);
        free(SecondLastPtr->next->item);    // free the string that is allocated by malloc
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.StringNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "vector"))
    {
        VectorNode *SecondLastPtr = VGetVectorNode(List, List->size - 2);
        VDelete(SecondLastPtr->next->item);    // delete the vector in that node first
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.VectorNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "list"))
    {
        ListNode *SecondLastPtr = VGetListNode(List, List->size - 2);
        LDelete(SecondLastPtr->next->item);    // delete the list in that node first
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.ListNode = SecondLastPtr;
        return 0;
    }
    else if (SIsSame(List->type, "dict"))
    {
        DictNode *SecondLastPtr = VGetDictNode(List, List->size - 2);
        DDelete(SecondLastPtr->next->item);    // delete the dict in that node first
        free(SecondLastPtr->next);
        SecondLastPtr->next = NULL;
        List->size--;
        List->lastNode.DictNode = SecondLastPtr;
        return 0;
    }
    else 
    {
        printf("Cannot find type for vector");
    }
}
int logVector(vector List)
{
    if (List == NULL)
        return 0;
    else if (SIsSame(List->type, "char"))
    {
        CharNode *ptr = List->firstNode.CharNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %c\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "short"))
    {
        ShortNode *ptr = List->firstNode.ShortNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %i\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "int"))
    {
        IntNode *ptr = List->firstNode.IntNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %d\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "long"))
    {
        LongNode *ptr = List->firstNode.LongNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %ld\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "long long"))
    {
        LongLongNode *ptr = List->firstNode.LongLongNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %lld\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "float")) 
    {
        FloatNode *ptr = List->firstNode.FloatNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %f\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "double")) 
    {
        DoubleNode *ptr = List->firstNode.DoubleNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %f\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "long double"))
    {
        LongDoubleNode *ptr = List->firstNode.LongDoubleNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %Lf\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "string"))
    {
        StringNode *ptr = List->firstNode.StringNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] %s\n", i, ptr->item);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "vector"))
    {
        VectorNode *ptr = List->firstNode.VectorNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] Vector: { Type: %s, Size: %ld }\n", i, ptr->item->type, ptr->item->size);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "list"))
    {
        ListNode *ptr = List->firstNode.ListNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] List: { Size: %ld }\n", i, ptr->item->size);
            ptr = ptr->next;
        }
        return 0;
    }
    else if (SIsSame(List->type, "dict"))
    {
        DictNode *ptr = List->firstNode.DictNode;
        for (int i = 0; i < List->size; i++)
        {
            printf("[%i] Dict: { Size: %ld }\n", i, ptr->item->size);
            ptr = ptr->next;
        }
        return 0;
    }

    else 
    {
        printf("Cannot find type for vector");
    }
}
int VDelete(vector List)
{
    if (List == NULL)
        return 0;
    else if (SIsSame(List->type, "char"))
    {
        CharNode *ptr = List->firstNode.CharNode;
        free(List);
        while (ptr != NULL)
        {
            CharNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "short"))
    {
        ShortNode *ptr = List->firstNode.ShortNode;
        free(List);
        while (ptr != NULL)
        {
            ShortNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "int"))
    {
        IntNode *ptr = List->firstNode.IntNode;
        free(List);
        while (ptr != NULL)
        {
            IntNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "long"))
    {
        LongNode *ptr = List->firstNode.LongNode;
        free(List);
        while (ptr != NULL)
        {
            LongNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "long long"))
    {
        LongLongNode *ptr = List->firstNode.LongLongNode;
        free(List);
        while (ptr != NULL)
        {
            LongLongNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "float")) 
    {
        FloatNode *ptr = List->firstNode.FloatNode;
        free(List);
        while (ptr != NULL)
        {
            FloatNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "double")) 
    {
        DoubleNode *ptr = List->firstNode.DoubleNode;
        free(List);
        while (ptr != NULL)
        {
            DoubleNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "long double"))
    {
        LongDoubleNode *ptr = List->firstNode.LongDoubleNode;
        free(List);
        while (ptr != NULL)
        {
            LongDoubleNode *tmp = ptr->next;
            free(ptr);
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "string"))
    {
        StringNode *ptr = List->firstNode.StringNode;
        free(List);
        while (ptr != NULL)
        {
            StringNode *tmp = ptr->next;
            free(ptr->item);    // free the string that is allocated by malloc
            free(ptr);          // free the node 
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "vector"))
    {
        VectorNode *ptr = List->firstNode.VectorNode;
        free(List);
        while (ptr != NULL)
        {
            VectorNode *tmp = ptr->next;
            VDelete(ptr->item); // delete the vector
            free(ptr);          // free the node 
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "list"))
    {
        ListNode *ptr = List->firstNode.ListNode;
        free(List);
        while (ptr != NULL)
        {
            ListNode *tmp = ptr->next;
            LDelete(ptr->item); // delete the list
            free(ptr);          // free the node 
            ptr = tmp;
        }
        return 0;
    }
    else if (SIsSame(List->type, "dict"))
    {
        DictNode *ptr = List->firstNode.DictNode;
        free(List);
        while (ptr != NULL)
        {
            DictNode *tmp = ptr->next;
            DDelete(ptr->item); // delete the dict
            free(ptr);          // free the node 
            ptr = tmp;
        }
        return 0;
    }
    else 
    {
        printf("Cannot find type for vector");
    }
}

long VLen(vector List)
{
    return List->size;
}

int VRemoveItem(vector List, long index)
{
    if (List == NULL || List->size == 0)
        return 0;
    else if (index >= (List->size - 1))
    {
        VPop(List);
        return 0;
    }
    if (SIsSame(List->type, "char"))
    {
        if (index == 0)
        {
            CharNode *thisPtr = List->firstNode.CharNode;
            List->firstNode.CharNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            CharNode *previousPtr = VGetCharNode(List, index - 1);
            CharNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "short"))
    {
        if (index == 0)
        {
            ShortNode *thisPtr = List->firstNode.ShortNode;
            List->firstNode.ShortNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            ShortNode *previousPtr = VGetShortNode(List, index - 1);
            ShortNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "int"))
    {
        if (index == 0)
        {
            IntNode *thisPtr = List->firstNode.IntNode;
            List->firstNode.IntNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            IntNode *previousPtr = VGetIntNode(List, index - 1);
            IntNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "long"))
    {
        if (index == 0)
        {
            LongNode *thisPtr = List->firstNode.LongNode;
            List->firstNode.LongNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            LongNode *previousPtr = VGetLongNode(List, index - 1);
            LongNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "long long"))
    {
        if (index == 0)
        {
            LongLongNode *thisPtr = List->firstNode.LongLongNode;
            List->firstNode.LongLongNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            LongLongNode *previousPtr = VGetLLongNode(List, index - 1);
            LongLongNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "float")) 
    {
        if (index == 0)
        {
            FloatNode *thisPtr = List->firstNode.FloatNode;
            List->firstNode.FloatNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            FloatNode *previousPtr = VGetFloatNode(List, index - 1);
            FloatNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "double")) 
    {
        if (index == 0)
        {
            DoubleNode *thisPtr = List->firstNode.DoubleNode;
            List->firstNode.DoubleNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            DoubleNode *previousPtr = VGetDoubleNode(List, index - 1);
            DoubleNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "long double"))
    {
        if (index == 0)
        {
            LongDoubleNode *thisPtr = List->firstNode.LongDoubleNode;
            List->firstNode.LongDoubleNode = thisPtr->next;
            free(thisPtr);
        }
        else
        {
            LongDoubleNode *previousPtr = VGetLDoubleNode(List, index - 1);
            LongDoubleNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr);
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "string"))
    {
        if (index == 0)
        {
            StringNode *thisPtr = List->firstNode.StringNode;
            List->firstNode.StringNode = thisPtr->next;
            free(thisPtr->item);    // free the string, that is allocated by malloc
            free(thisPtr);          // free the node
        }
        else
        {
            StringNode *previousPtr = VGetStringNode(List, index - 1);
            StringNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            free(thisPtr->item);    // free the string
            free(thisPtr);          // free the node
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "vector"))
    {
        if (index == 0)
        {
            VectorNode *thisPtr = List->firstNode.VectorNode;
            List->firstNode.VectorNode = thisPtr->next;
            VDelete(thisPtr->item); // delete the vector
            free(thisPtr);          // free the node
        }
        else
        {
            VectorNode *previousPtr = VGetVectorNode(List, index - 1);
            VectorNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            VDelete(thisPtr->item); // delete the vector
            free(thisPtr);          // free the node
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "list"))
    {
        if (index == 0)
        {
            ListNode *thisPtr = List->firstNode.ListNode;
            List->firstNode.ListNode = thisPtr->next;
            LDelete(thisPtr->item); // delete the vector
            free(thisPtr);          // free the node
        }
        else
        {
            ListNode *previousPtr = VGetListNode(List, index - 1);
            ListNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            LDelete(thisPtr->item); // delete the vector
            free(thisPtr);          // free the node
        }
        List->size--;
        return 0;
    }
    else if (SIsSame(List->type, "dict"))
    {
        if (index == 0)
        {
            DictNode *thisPtr = List->firstNode.DictNode;
            List->firstNode.DictNode = thisPtr->next;
            DDelete(thisPtr->item); // delete the vector
            free(thisPtr);          // free the node
        }
        else
        {
            DictNode *previousPtr = VGetDictNode(List, index - 1);
            DictNode *thisPtr = previousPtr->next;
            previousPtr->next = thisPtr->next;
            DDelete(thisPtr->item); // delete the vector
            free(thisPtr);          // free the node
        }
        List->size--;
        return 0;
    }
    else 
    {
        printf("cannot find type for vector\n");
    }
}

int VIsSame(vector list1, vector list2)
{
    if (!SIsSame(list1->type, list2->type) || list1->size != list2->size)
    {
        return 0;
    }
    else if (SIsSame(list1->type, "char"))
    {
        CharNode *ptr1 = list1->firstNode.CharNode;
        CharNode *ptr2 = list2->firstNode.CharNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "short"))
    {
        ShortNode *ptr1 = list1->firstNode.ShortNode;
        ShortNode *ptr2 = list2->firstNode.ShortNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "int"))
    {
        IntNode *ptr1 = list1->firstNode.IntNode;
        IntNode *ptr2 = list2->firstNode.IntNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "long"))
    {
        LongNode *ptr1 = list1->firstNode.LongNode;
        LongNode *ptr2 = list2->firstNode.LongNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "long long"))
    {
        LongLongNode *ptr1 = list1->firstNode.LongLongNode;
        LongLongNode *ptr2 = list2->firstNode.LongLongNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "float")) 
    {
        FloatNode *ptr1 = list1->firstNode.FloatNode;
        FloatNode *ptr2 = list2->firstNode.FloatNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "double")) 
    {
        DoubleNode *ptr1 = list1->firstNode.DoubleNode;
        DoubleNode *ptr2 = list2->firstNode.DoubleNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "long double"))
    {
        LongDoubleNode *ptr1 = list1->firstNode.LongDoubleNode;
        LongDoubleNode *ptr2 = list2->firstNode.LongDoubleNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (ptr1->item != ptr2->item)
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "string"))
    {
        StringNode *ptr1 = list1->firstNode.StringNode;
        StringNode *ptr2 = list2->firstNode.StringNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (!SIsSame(ptr1->item, ptr2->item))
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "vector"))
    {
        VectorNode *ptr1 = list1->firstNode.VectorNode;
        VectorNode *ptr2 = list2->firstNode.VectorNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (!VIsSame(ptr1->item, ptr2->item))
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "list"))
    {
        ListNode *ptr1 = list1->firstNode.ListNode;
        ListNode *ptr2 = list2->firstNode.ListNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (!LIsSame(ptr1->item, ptr2->item))
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else if (SIsSame(list1->type, "dict"))
    {
        DictNode *ptr1 = list1->firstNode.DictNode;
        DictNode *ptr2 = list2->firstNode.DictNode;
        for (int i = 0; i < list1->size; i++)
        {
            if (!DIsSame(ptr1->item, ptr2->item))
            {
                return 0; // they are not same, false
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return 1; // they are same, true
    }
    else 
    {
        printf("Cannot find type for vector");
    }
}
int VCopy(vector list1, vector list2)
{
    if (list1 == NULL || list2 == NULL)
        return 0;
    if (!SIsSame(list1->type, list2->type))
    {
        return 0;
    }
    else if (SIsSame(list1->type, "char"))
    {
        CharNode *ptr = list2->firstNode.CharNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendChar(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "short"))
    {
        ShortNode *ptr = list2->firstNode.ShortNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendShort(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "int"))
    {
        IntNode *ptr = list2->firstNode.IntNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendInt(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "long"))
    {
        LongNode *ptr = list2->firstNode.LongNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendLong(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "long long"))
    {
        LongLongNode *ptr = list2->firstNode.LongLongNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendLLong(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "float")) 
    {
        FloatNode *ptr = list2->firstNode.FloatNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendFloat(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "double")) 
    {
        DoubleNode *ptr = list2->firstNode.DoubleNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendDouble(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "long double"))
    {
        LongDoubleNode *ptr = list2->firstNode.LongDoubleNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendLDouble(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "string"))
    {
        StringNode *ptr = list2->firstNode.StringNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendString(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "vector"))
    {
        VectorNode *ptr = list2->firstNode.VectorNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendVector(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "list"))
    {
        ListNode *ptr = list2->firstNode.ListNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendList(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else if (SIsSame(list1->type, "dict"))
    {
        DictNode *ptr = list2->firstNode.DictNode;
        for (int i = 0; i < list2->size; i++)
        {
            VAppendDict(list1, ptr->item);
            ptr = ptr->next;
        }
    }
    else 
    {
        printf("Cannot find type for vector");
    }
}

vector VReCreate(vector List)
{
    vector newVector;
    if (SIsSame(List->type, "char"))
        newVector = InitVectorOfChar();
        
    else if (SIsSame(List->type, "short"))
        newVector = InitVectorOfShort();

    else if (SIsSame(List->type, "int"))
        newVector = InitVectorOfInt();

    else if (SIsSame(List->type, "long"))
        newVector = InitVectorOfLong();

    else if (SIsSame(List->type, "long long"))
        newVector = InitVectorOfLLong();

    else if (SIsSame(List->type, "float"))
        newVector = InitVectorOfFloat();

    else if (SIsSame(List->type, "double"))
        newVector = InitVectorOfDouble();

    else if (SIsSame(List->type, "long double"))
        newVector = InitVectorOfLDouble();

    else if (SIsSame(List->type, "string"))
        newVector = InitVectorOfString();

    else if (SIsSame(List->type, "vector"))
        newVector = InitVectorOfVector();

    else if (SIsSame(List->type, "list"))
        newVector = InitVectorOfList();
    
    else if (SIsSame(List->type, "dict"))
        newVector = InitVectorOfDict();

    VCopy(newVector, List);
    return newVector;
}

int VReplaceChar(vector List, char item, long index)
{
    if (!SIsSame(List->type, "char"))
    {
        printf("Cannot replace char in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertChar(List, item, index);
}
int VReplaceShort(vector List, short item, long index)
{
    if (!SIsSame(List->type, "short"))
    {
        printf("Cannot replace short in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertShort(List, item, index);
}
int VReplaceInt(vector List, int item, long index)
{
    if (!SIsSame(List->type, "int"))
    {
        printf("Cannot replace int in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertInt(List, item, index);
}
int VReplaceLong(vector List, long item, long index)
{
    if (!SIsSame(List->type, "long"))
    {
        printf("Cannot replace long in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertLong(List, item, index);
}
int VReplaceLLong(vector List, long long item, long index)
{
    if (!SIsSame(List->type, "long long"))
    {
        printf("Cannot replace long long in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertLLong(List, item, index);
}
int VReplaceFloat(vector List, float item, long index)
{
    if (!SIsSame(List->type, "float"))
    {
        printf("Cannot replace float in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertFloat(List, item, index);
}
int VReplaceDouble(vector List, double item, long index)
{
    if (!SIsSame(List->type, "double"))
    {
        printf("Cannot replace double in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertDouble(List, item, index);
}
int VReplaceLDouble(vector List, long double item, long index)
{
    if (!SIsSame(List->type, "long double"))
    {
        printf("Cannot replace long double in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertLDouble(List, item, index);
}
int VReplaceString(vector List, string item, long index)
{
    if (!SIsSame(List->type, "string"))
    {
        printf("Cannot replace string in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertString(List, item, index);
}
int VReplaceVector(vector List, vector item, long index)
{
    if (!SIsSame(List->type, "vector"))
    {
        printf("Cannot replace vector in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertVector(List, item, index);
}
int VReplaceList(vector List, list item, long index)
{
    if (!SIsSame(List->type, "list"))
    {
        printf("Cannot replace list in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertList(List, item, index);
}
int VReplaceDict(vector List, dict item, long index)
{
    if (!SIsSame(List->type, "dict"))
    {
        printf("Cannot replace dict in Vector of type %s\n", List->type);
        return 1;
    }
    VRemoveItem(List, index);
    VInsertDict(List, item, index);   
}

long VFindCharFrom(vector List, char item, long index)
{
    CharNode *ptr = VGetCharNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindShortFrom(vector List, short item, long index)
{
    ShortNode *ptr = VGetShortNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindIntFrom(vector List, int item, long index)
{
    IntNode *ptr = VGetIntNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindLongFrom(vector List, long item, long index)
{
    LongNode *ptr = VGetLongNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindLLongFrom(vector List, long long item, long index)
{
    LongLongNode *ptr = VGetLLongNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindFloatFrom(vector List, float item, long index)
{
    FloatNode *ptr = VGetFloatNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindDoubleFrom(vector List, double item, long index)
{
    DoubleNode *ptr = VGetDoubleNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindLDoubleFrom(vector List, long double item, long index)
{
    LongDoubleNode *ptr = VGetLDoubleNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(item == ptr->item)
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindStringFrom(vector List, string item, long index)
{
    StringNode *ptr = VGetStringNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if (SIsSame(item, ptr->item))
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindVectorFrom(vector List, vector item, long index)
{
    VectorNode *ptr = VGetVectorNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(VIsSame(item, ptr->item))
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindListFrom(vector List, list item, long index)
{
    ListNode *ptr = VGetListNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if(LIsSame(item, ptr->item))
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}
long VFindDictFrom(vector List, dict item, long index)
{
    DictNode *ptr = VGetDictNode(List, index);
    for (int i = index; i < List->size; i++)
    {
        if (DIsSame(item, ptr->item))
        {
            return i;
        }
        ptr = ptr->next;
    }
    return -1;
}

long VFindChar(vector List, char item)
{
    return VFindCharFrom(List, item, 0);
}
long VFindShort(vector List, short item)
{
    return VFindShortFrom(List, item, 0);
}
long VFindInt(vector List, int item)
{
    return VFindIntFrom(List, item, 0);
}
long VFindLong(vector List, long item)
{
    return VFindLongFrom(List, item, 0);
}
long VFindLLong(vector List, long long item)
{
    return VFindLongFrom(List, item, 0);
}
long VFindFloat(vector List, float item)
{
    return VFindFloatFrom(List, item, 0);
}
long VFindDouble(vector List, double item)
{
    return VFindDoubleFrom(List, item, 0);
}
long VFindLDouble(vector List, long double item)
{
    return VFindLDoubleFrom(List, item, 0);
}
long VFindString(vector List, string item)
{
    return VFindStringFrom(List, item, 0);
}
long VFindVector(vector List, vector item)
{
    return VFindVectorFrom(List, item, 0);
}
long VFindList(vector List, list item)
{
    return VFindListFrom(List, item, 0);
}
long VFindDict(vector List, dict item)
{
    return VFindDictFrom(List, item, 0);
}

char VGetChar(vector List, long index)
{
    return VGetCharNode(List, index)->item;
}
short VGetShort(vector List, long index)
{
    return VGetShortNode(List, index)->item;
}
int VGetInt(vector List, long index)
{
    return VGetIntNode(List, index)->item;
}
long VGetLong(vector List, long index)
{
    return VGetLongNode(List, index)->item;
}
long long VGetLLong(vector List, long index)
{
    return VGetLLongNode(List, index)->item;
}
float VGetFloat(vector List, long index)
{
    return VGetFloatNode(List, index)->item;
}
double VGetDouble(vector List, long index)
{
    return VGetDoubleNode(List, index)->item;
}
long double VGetLDouble(vector List, long index)
{
    return VGetLDoubleNode(List, index)->item;
}
string VGetString(vector List, long index)
{
    return VGetStringNode(List, index)->item;
}
vector VGetVector(vector List, long index)
{
    return VGetVectorNode(List, index)->item;
}
list VGetList(vector List, long index)
{
    return VGetListNode(List, index)->item;
}
dict VGetDict(vector List, long index)
{
    return VGetDictNode(List, index)->item;
}