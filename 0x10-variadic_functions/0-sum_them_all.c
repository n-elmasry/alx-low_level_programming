#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - checks for uppercase character.
*@n: letter to be checked
* Return:Returns 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, result = 0, num;

va_list args;
va_start(args, n);


if (n == 0)
{
va_end(args);
return (0);
}
for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
result = result + num;
}
va_end(args);
return (result);
}
