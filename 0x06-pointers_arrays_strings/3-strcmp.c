#include "main.h"
/**
 *_strcmp - compare strings.
 *@s1: first string.
 *@s2: second string.
 *Return: value less than 0 if string is less than the other. value greater than 0 if the string is greater than the other & 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
