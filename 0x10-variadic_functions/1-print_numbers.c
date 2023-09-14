#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_numbers -  prints numbers, followed by a new line.
*@separator: seprator
*@n: int
* Return:Returns 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, nums;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
nums = va_arg(args, unsigned int);
printf("%d", nums);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");
va_end(args);
}
