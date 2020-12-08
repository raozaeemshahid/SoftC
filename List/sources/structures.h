typedef struct ItemNode
{
    char type[16];

    union {
        char* String;
        long double LDouble;
        double Double;
        float Float;
        long long LLong;
        long Long;
        int Int;
        short Short;
        char Char;
        struct Vector_S *Vector;
        struct List_S *List;
        struct Dict_S *Dict;
    } item;

    struct ItemNode *next;
} ItemNode;
typedef struct List_S
{

    long size;
    struct ItemNode *firstItem;
    struct ItemNode *lastItem;

} List_S;