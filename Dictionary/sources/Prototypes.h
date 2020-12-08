dict initDict();

IdentityNode* DGetNode(dict Dict, string key);

int DIdentifyChar(dict Dict, string key, char value);
int DIdentifyShort(dict Dict, string key, short value);
int DIdentifyInt(dict Dict, string key, int value);
int DIdentifyLong(dict Dict, string key, long value);
int DIdentifyLLong(dict Dict, string key, long long value);
int DIdentifyFloat(dict Dict, string key, float value);
int DIdentifyDouble(dict Dict, string key, double value);
int DIdentifyLDouble(dict Dict, string key, long double value);
int DIdentifyString(dict Dict, string key, string value);
int DIdentifyVector(dict Dict, string key, vector value);
int DIdentifyList(dict Dict, string key, list value);
int DIdentifyDict(dict Dict, string key, dict value);

long DLen(dict Dict);
int DRemoveIdentity(dict Dict, string key);
string DGetValueType(dict Dict, string key);
void logDict(dict Dict);
int DHasKey(dict Dict, string key);
int DHaveSameKeys(dict Dict1, dict Dict2);
int DCopyIdentities(dict Dict1, dict Dict2);
int DIsSame(dict Dict1, dict Dict2);

dict DReCreate(dict Dict);

char DGetChar(dict Dict, string key);
short DGetShort(dict Dict, string key);
int DGetInt(dict Dict, string key);
long DGetLong(dict Dict, string key);
long long DGetLLong(dict Dict, string key);
float DGetFloat(dict Dict, string key);
double DGetDouble(dict Dict, string key);
long double DGetLDouble(dict Dict, string key);
string DGetString(dict Dict, string key);
vector DGetVector(dict Dict, string key);
list DGetList(dict Dict, string key);
dict DGetDict(dict Dict, string key);

int DDelete(dict Dict);