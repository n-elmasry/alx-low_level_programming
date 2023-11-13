#include "main.h"

/**
*_isdigit - checks for digit
*@c: letter to be checked
*Description: checks for digit
* Return:Returns 1 if c is is a digit , 0 otherwise
*/

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
