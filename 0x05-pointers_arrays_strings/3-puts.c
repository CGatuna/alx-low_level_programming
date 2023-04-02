#include "main.h"
/**
**_puts - prints string.
*@str: string to be printed.
*Return: void.
*/
void _putchar()
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
