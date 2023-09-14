#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_strings - prints strings, followed by a new line.
*@separator: seprator
*@n: int
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char*);

if (str != NULL)
{
printf("%s", str);
}

else
{
printf("nil");
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}

}
printf("\n");
va_end(args);
}
