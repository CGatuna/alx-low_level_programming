#include "main.h"
/**
**_puts - prints string.
*_putchar - method defination
*@str: string to be printed.
*Return: string and new line.
*/
void _putchar();
void _puts(char *str)
{
int n = 0;
while (str[n])
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
