#include "main.h"
/**
 **leet - encodes string to 1337.
 *Letters a and A are replaced by 4
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *Return: pointer to s.
 */
char *leet(char *s)
{
int string_length, leetCount;
char leetLetters[] = "aAeEoOtTlL";
char leetNums = "4433007711";
string_length = 0;
while (s[string_length] != '\0')
{
leetCount = 0;
while (leetCount < 10)
{
if (leetLetters[leetCount] == s[string_length])
{
s[string_lenth] = leetNums[leetCount];
}
leetCount++;
}
string_lenth++;
}
return (s);
}
