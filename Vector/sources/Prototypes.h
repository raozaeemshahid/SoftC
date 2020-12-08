vector InitVectorOfChar();
vector InitVectorOfShort();
vector InitVectorOfInt();
vector InitVectorOfLong();
vector InitVectorOfLLong();
vector InitVectorOfFloat();
vector InitVectorOfDouble();
vector InitVectorOfLDouble();
vector InitVectorOfString();
vector InitVectorOfVector();
vector InitVectorOfList();
vector InitVectorOfDict();

CharNode* VGetCharNode(vector List, long index);
ShortNode* VGetShortNode(vector List, long index);
IntNode* VGetIntNode(vector List, long index);
LongNode* VGetLongNode(vector List, long index);
LongLongNode* VGetLLongNode(vector List, long index);
FloatNode* VGetFloatNode(vector List, long index);
DoubleNode* VGetDoubleNode(vector List, long index);
LongDoubleNode* VGetLDoubleNode(vector List, long index);
StringNode* VGetStringNode(vector List, long index);
VectorNode* VGetVectorNode(vector List, long index);
ListNode* VGetListNode(vector List, long index);
DictNode* VGetDictNode(vector List, long index);

int VAppendChar(vector List, char item);
int VAppendShort(vector List, short item);
int VAppendInt(vector List, int item);
int VAppendLong(vector List, long item);
int VAppendLLong(vector List, long long item);
int VAppendFloat(vector List, float item);
int VAppendDouble(vector List, double item);
int VAppendLDouble(vector List, long double item);
int VAppendString(vector List, string item);
int VAppendVector(vector List, vector item);
int VAppendList(vector List, list item);
int VAppendDict(vector List, dict item);

int VInsertChar(vector List, char item, long index);
int VInsertShort(vector List, short item, long index);
int VInsertInt(vector List, int item, long index);
int VInsertLong(vector List, long item, long index);
int VInsertLLong(vector List, long long item, long index);
int VInsertFloat(vector List, float item, long index);
int VInsertDouble(vector List, double item, long index);
int VInsertLDouble(vector List, long double item, long index);
int VInsertString(vector List, string item, long index);
int VInsertVector(vector List, vector item, long index);
int VInsertList(vector List, list item, long index);
int VInsertDict(vector List, dict item, long index);

long VLen(vector List);
int VRemoveItem(vector List, long index);

int VPop(vector List);
int logVector(vector List);
int VIsSame(vector List1, vector List2);
int VCopy(vector List1, vector List2);

vector VReCreate(vector List);

int VReplaceChar(vector List, char item, long index);
int VReplaceShort(vector List, short item, long index);
int VReplaceInt(vector List, int item, long index);
int VReplaceLong(vector List, long item, long index);
int VReplaceLLong(vector List, long long item, long index);
int VReplaceFloat(vector List, float item, long index);
int VReplaceDouble(vector List, double item, long index);
int VReplaceLDouble(vector List, long double item, long index);
int VReplaceString(vector List, string item, long index);
int VReplaceVector(vector List, vector item, long index);
int VReplaceList(vector List, list item, long index);
int VReplaceDict(vector List, dict item, long index);

long VFindCharFrom(vector List, char item, long index);
long VFindShortFrom(vector List, short item, long index);
long VFindIntFrom(vector List, int item, long index);
long VFindLongFrom(vector List, long item, long index);
long VFindLLongFrom(vector List, long long item, long index);
long VFindFloatFrom(vector List, float item, long index);
long VFindDoubleFrom(vector List, double item, long index);
long VFindLDoubleFrom(vector List, long double item, long index);
long VFindStringFrom(vector List, string item, long index);
long VFindVectorFrom(vector List, vector item, long index);
long VFindListFrom(vector List, list item, long index);
long VFindDictFrom(vector List, dict item, long index);

long VFindChar(vector List, char item);
long VFindShort(vector List, short item);
long VFindInt(vector List, int item);
long VFindLong(vector List, long item);
long VFindLLong(vector List, long long item);
long VFindFloat(vector List, float item);
long VFindDouble(vector List, double item);
long VFindLDouble(vector List, long double item);
long VFindString(vector List, string item);
long VFindVector(vector List, vector item);
long VFindList(vector List, list item);
long VFindDict(vector List, dict item);

char VGetChar(vector List, long index);
short VGetShort(vector List, long index);
int VGetInt(vector List, long index);
long VGetLong(vector List, long index);
long long VGetLLong(vector List, long index);
float VGetFloat(vector List, long index);
double VGetDouble(vector List, long index);
long double VGetLDouble(vector List, long index);
string VGetString(vector List, long index);
vector VGetVector(vector List, long index);
list VGetList(vector List, long index);
dict VGetDict(vector List, long index);

int VDelete(vector List);
