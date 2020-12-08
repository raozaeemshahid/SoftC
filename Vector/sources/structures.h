typedef struct CharNode
{
    char item;
    struct CharNode *next;
} CharNode;

typedef struct ShortNode
{
    short item;
    struct ShortNode *next;
} ShortNode;

typedef struct IntNode
{
    int item;
    struct IntNode *next;
} IntNode;

typedef struct LongNode
{
    long item;
    struct LongNode *next;
} LongNode;

typedef struct LongLongNode
{
    long long item;
    struct LongLongNode *next;
} LongLongNode;

typedef struct FloatNode
{
    float item;
    struct FloatNode *next;
} FloatNode;

typedef struct DoubleNode
{
    double item;
    struct DoubleNode *next;
} DoubleNode;

typedef struct LongDoubleNode
{
    long double item;
    struct LongDoubleNode *next;
} LongDoubleNode;

typedef struct StringNode
{
    char *item;
    struct StringNode *next;
} StringNode;

typedef struct VectorNode
{   
    struct Vector_S *item;
    struct VectorNode *next;
} VectorNode;

typedef struct ListNode
{   
    struct List_S *item;
    struct ListNode *next;
} ListNode;

typedef struct DictNode
{   
    struct Dict_S *item;
    struct DictNode *next;
} DictNode;

typedef struct Vector_S
{
    long size;
    char type[16];

    union {
        struct CharNode *CharNode;
        struct ShortNode *ShortNode;
        struct IntNode *IntNode;
        struct LongNode *LongNode;
        struct LongLongNode *LongLongNode;
        struct FloatNode *FloatNode;
        struct DoubleNode *DoubleNode;
        struct LongDoubleNode *LongDoubleNode;
        struct StringNode *StringNode;
        struct VectorNode *VectorNode;
        struct ListNode *ListNode;
        struct DictNode *DictNode;
    } firstNode;

    union
    {
        struct CharNode *CharNode;
        struct ShortNode *ShortNode;
        struct IntNode *IntNode;
        struct LongNode *LongNode;
        struct LongLongNode *LongLongNode;
        struct FloatNode *FloatNode;
        struct DoubleNode *DoubleNode;
        struct LongDoubleNode *LongDoubleNode;
        struct StringNode *StringNode;
        struct VectorNode *VectorNode;
        struct ListNode *ListNode;
        struct DictNode *DictNode;
    } lastNode;
        
} Vector_S;

