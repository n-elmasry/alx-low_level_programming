#include "main.h"

/**
*_isalpha - checks for alphabetic character
*
*Description: checks for alphabetic character
* Return: Always 0 (success)
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);

}
