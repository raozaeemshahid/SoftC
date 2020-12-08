list initList();

ItemNode* LGetNode(list List, long index);

int LAppendChar(list List, char item);
int LAppendShort(list List, short item);
int LAppendInt(list List, int item);
int LAppendLong(list List, long item);
int LAppendLLong(list List, long long item);
int LAppendFloat(list List, float item);
int LAppendDouble(list List, double item);
int LAppendLDouble(list List, long double item);
int LAppendString(list List, string item);
int LAppendVector(list List, vector item);
int LAppendList(list List, list item);
int LAppendDict(list List, dict item);

int LInsertChar(list List, char item, long index);
int LInsertShort(list List, short item, long index);
int LInsertInt(list List, int item, long index);
int LInsertLong(list List, long item, long index);
int LInsertLLong(list List, long long item, long index);
int LInsertFloat(list List, float item, long index);
int LInsertDouble(list List, double item, long index);
int LInsertLDouble(list List, long double item, long index);
int LInsertString(list List, string item, long index);
int LInsertVector(list List, vector item, long index);
int LInsertList(list List, list item, long index);
int LInsertDict(list List, dict item, long index);

long LLen(list List);
int LRemoveItem(list List, long index);
string LGetType(list List, long index);
void LPop(list List);
void logList(list List);
int LIsSame(list List1, list List2);
int LCopy(list List1, list List2);

list LReCreate(list List);

void LReplaceChar(list List, char item, long index);
void LReplaceShort(list List, short item, long index);
void LReplaceInt(list List, int item, long index);
void LReplaceLong(list List, long item, long index);
void LReplaceLLong(list List, long long item, long index);
void LReplaceFloat(list List, float item, long index);
void LReplaceDouble(list List, double item, long index);
void LReplaceLDouble(list List, long double item, long index);
void LReplaceString(list List, string item, long index);
void LReplaceVector(list List, vector item, long index);
void LReplaceList(list List, list item, long index);
void LReplaceDict(list List, dict item, long index);

long LFindCharFrom(list List, char item, long index);
long LFindShortFrom(list List, short item, long index);
long LFindIntFrom(list List, int item, long index);
long LFindLongFrom(list List, long item, long index);
long LFindLLongFrom(list List, long long item, long index);
long LFindFloatFrom(list List, float item, long index);
long LFindDoubleFrom(list List, double item, long index);
long LFindLDoubleFrom(list List, long double item, long index);
long LFindStringFrom(list List, string item, long index);
long LFindVectorFrom(list List, vector item, long index);
long LFindListFrom(list List, list item, long index);
long LFindDictFrom(list List, dict item, long index);

long LFindChar(list List, char item);
long LFindShort(list List, short item);
long LFindInt(list List, int item);
long LFindLong(list List, long item);
long LFindLLong(list List, long long item);
long LFindFloat(list List, float item);
long LFindDouble(list List, double item);
long LFindLDouble(list List, long double item);
long LFindString(list List, string item);
long LFindVector(list List, vector item);
long LFindList(list List, list item);
long LFindDict(list List, dict item);

char LGetChar(list List, long index);
short LGetShort(list List, long index);
int LGetInt(list List, long index);
long LGetLong(list List, long index);
long long LGetLLong(list List, long index);
float LGetFloat(list List, long index);
double LGetDouble(list List, long index);
long double LGetLDouble(list List, long index);
string LGetString(list List, long index);
vector LGetVector(list List, long index);
list LGetList(list List, long index);
dict LGetDict(list List, long index);

int LDelete(list List);
