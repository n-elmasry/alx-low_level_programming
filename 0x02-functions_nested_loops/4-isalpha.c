#include "main.h"

/**
*_isalpha - checks for alphabetic character
*
*Description: checks for alphabetic character
*@c: the checked number
* Return: 1 if character is letter,, 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
