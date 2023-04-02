#include "main.h"
/**
*_strcmp - compares two strings.
*@s1: pointer to first string.
*@s2: pointer to second string.
*Return: value less than 0 if the string is less than the other, value greater than 0 if the string is greater than the other & 0 if strings are equal
*/
int _strcmp(char *s1, char *s2)
{
int k;
k = 0;
while (s1[k] != '\0'] && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++
}
return (0);
}
