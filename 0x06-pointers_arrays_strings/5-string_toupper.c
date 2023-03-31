#include "main.h"
/**
<<<<<<< HEAD
 **string_toupper - changes all lowercase to uppercase.
=======
 * *string_toupper - changes all lowercase to uppercase.
>>>>>>> f341a4289d31ffe6d9e91b33383a14c14579ccf7
 *@x: pointer to string.
 *Return: uppercase string.
 */
char *string_toupper(char *)
{
int string_length;
string_length = 0;
while (x[string_length] != '\0')
{
if (x[string_length] >= 97 && x[string_length <= 122])
{
x[string_length] = x[string_length] - 32;
}
string_length++;
}
return (x);
}
