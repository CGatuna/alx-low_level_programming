#include "main.h"
/**
*puts2 - prints characters of a string.
*@str: string to be used.
*Return: void.
*/
void puts2(char *str)
{
int z = 0;
while (str[z] != '\0')
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
z++;
}
_putchar('\n');
}
