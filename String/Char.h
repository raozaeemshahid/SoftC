int CIsUpper(char c)
{
    return c >= 65 && c <= 90;
}
int CIsLower(char c)
{
    return c >= 97 && c <= 122;
}
int CIsAlpha(char c)
{
    return CIsUpper(c) || CIsLower(c);
}
char CToUpper(char c)
{
    if (CIsUpper(c))
    {
        return c;
    }
    else if (CIsLower(c))
    {
        return c - 32;
    }
    return c;
}
char CToLower(char c)
{
    if (CIsUpper(c))
    {
        return c + 32;
    }
    else if (CIsLower(c))
    {
        return c;
    }
    return c;
}