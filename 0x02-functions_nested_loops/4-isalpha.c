#include "main.h"

/**
*_isalpha - checks for alphabetic character
*
*Description: checks for alphabetic character
* Return: Always 0 (success)
*/

int _isalpha(int c)
{
int c;

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
