typedef struct IdentityNode
{
    string key;
    string valueType;
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
    } value;
    struct IdentityNode *next;
} IdentityNode;

typedef struct Dict_S
{
    long size;
    struct IdentityNode* firstNode;
    struct IdentityNode* lastNode;
} Dict_S;