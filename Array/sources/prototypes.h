charArray initCharArr();
shortArray initShortArr();
intArray initIntArr();
longArray initLongArr();
llongArray initLLongArr();
floatArray initFloatArr();
doubleArray initDoubleArr();
ldoubleArray initLDoubleArr();
stringArray initStringArr();

charArray AppendChar(charArray array, char item);
shortArray AppendShort(shortArray array, short item);
intArray AppendInt(intArray array, int item);
longArray AppendLong(longArray array, long item);
llongArray AppendLLong(llongArray array, long long item);
floatArray AppendFloat(floatArray array, float item);
doubleArray AppendDouble(doubleArray array, double item);
ldoubleArray AppendLDouble(ldoubleArray array, long double item);
stringArray AppendString(stringArray array, string item);

charArray InsertChar(charArray array, char item, unsigned long index);
shortArray InsertShort(shortArray array, short item, unsigned long index);
intArray InsertInt(intArray array, int item, unsigned long index);
longArray InsertLong(longArray array, long item, unsigned long index);
llongArray InsertLLong(llongArray array, long long item, unsigned long index);
floatArray InsertFloat(floatArray array, float item, unsigned long index);
doubleArray InsertDouble(doubleArray array, double item, unsigned long index);
ldoubleArray InsertLDouble(ldoubleArray array, long double item, unsigned long index);
stringArray InsertString(stringArray array, string item, unsigned long index);

unsigned long SizeChars(charArray array);
unsigned long SizeShorts(shortArray array);
unsigned long SizeInts(intArray array);
unsigned long SizeLongs(longArray array);
unsigned long SizeLLongs(llongArray array);
unsigned long SizeFloats(floatArray array);
unsigned long SizeDoubles(doubleArray array);
unsigned long SizeLDoubles(ldoubleArray array);
unsigned long SizeStrings(stringArray array);

charArray RemoveChar(charArray array, unsigned long index);
shortArray RemoveShort(shortArray array, unsigned long index);
intArray RemoveInt(intArray array, unsigned long index);
longArray RemoveLong(longArray array, unsigned long index);
llongArray RemoveLLong(llongArray array, unsigned long index);
floatArray RemoveFloat(floatArray array, unsigned long index);
doubleArray RemoveDouble(doubleArray array, unsigned long index);
ldoubleArray RemoveLDouble(ldoubleArray array, unsigned long index);
stringArray RemoveString(stringArray array, unsigned long index);

charArray PopChar(charArray array);
shortArray PopShort(shortArray array);
intArray PopInt(intArray array);
longArray PopLong(longArray array);
llongArray PopLLong(llongArray array);
floatArray PopFloat(floatArray array);
doubleArray PopDouble(doubleArray array);
ldoubleArray PopLDouble(ldoubleArray array);
stringArray PopString(stringArray array);

charArray ReplaceChar(charArray array, char item, unsigned long index);
shortArray ReplaceShort(shortArray array, short item, unsigned long index);
intArray ReplaceInt(intArray array, int item, unsigned long index);
longArray ReplaceLong(longArray array, long item, unsigned long index);
llongArray ReplaceLLong(llongArray array,long long item, unsigned long index);
floatArray ReplaceFloat(floatArray array, float item, unsigned long index);
doubleArray ReplaceDouble(doubleArray array, double item, unsigned long index);
ldoubleArray ReplaceLDouble(ldoubleArray array, long double item, unsigned long index);
stringArray ReplaceString(stringArray array, string item, unsigned long index);

long FindChar(charArray array, char item);
long FindShort(shortArray array, short item);
long FindInt(intArray array, int item);
long FindLong(longArray array, long item);
long FindLLong(llongArray array, long long item);
long FindFloat(floatArray array, float item);
long FindDouble(doubleArray array, double item);
long FindLDouble(ldoubleArray array, long double item);
long FindString(stringArray array, string item);

long FindCharFrom(charArray array, char item, unsigned long from);
long FindShortFrom(shortArray array, short item, unsigned long from);
long FindIntFrom(intArray array, int item, unsigned long from);
long FindLongFrom(longArray array, long item, unsigned long from);
long FindLLongFrom(llongArray array, long long item, unsigned long from);
long FindFloatFrom(floatArray array, float item, unsigned long from);
long FindDoubleFrom(doubleArray array, double item, unsigned long from);
long FindLDoubleFrom(ldoubleArray array, long double item, unsigned long from);
long FindStringFrom(stringArray array, string item, unsigned long from);

void logChars(charArray array);
void logShorts(shortArray array);
void logInts(intArray array);
void logLongs(longArray array);
void logLLongs(llongArray array);
void logFloats(floatArray array);
void logDoubles(doubleArray array);
void logLDoubles(ldoubleArray array);
void logStrings(stringArray array);

int isSameChars(charArray array1, charArray array2);
int isSameShorts(shortArray array1, shortArray array2);
int isSameInts(intArray array1, intArray array2);
int isSameLongs(longArray array1, longArray array2);
int isSameLLongs(llongArray array1, llongArray array2);
int isSameFloats(floatArray array1, floatArray array2);
int isSameDoubles(doubleArray array1, doubleArray array2);
int isSameLDoubles(ldoubleArray array1, ldoubleArray array2);
int isSameStrings(stringArray array1, stringArray array2);

void DeleteChars(charArray array);
void DeleteShorts(shortArray array);
void DeleteInts(intArray array);
void DeleteLongs(longArray array);
void DeleteLLongs(llongArray array);
void DeleteFloats(floatArray array);
void DeleteDoubles(doubleArray array);
void DeleteLDoubles(ldoubleArray array);
void DeleteStrings(stringArray array);