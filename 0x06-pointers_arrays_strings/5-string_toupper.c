#include "main.h"

/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@s: array of string
*Description: changes all lowercase letters of a string to uppercase
* Return: 0
*/

char *string_toupper(char *s)
{

int i = 0;

while (s[i])
{

if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;

}
return (s);
}
