#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - prints anything
*@format: format
*/

void print_all(const char * const format, ...)
{
int i = 0;
char *sep = "", *s;

va_list args;
va_start(args, format);

while (format[i] && format)
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
{
printf("%s(nil)", sep);
}
printf("%s%s", sep, s);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
printf("\n");
va_end(args);
}
