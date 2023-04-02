#include "main.h"
/**
**_puts - prints string.
*@str: string to be printed.
*Return: string and new line.
*/
void _puchar();
void _puts(char *str)
{
int n = 0;
while (str[n])
{
putchar(str[n]);
n++;
}
putchar('\n');
}
