#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_int - prints int
*@args: args
* Return: void
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
*print_char - prints anything
*@args: argument
*/
void print_char(va_list args)
{
putchar(va_arg(args, int));
}
/**
*print_string - prints anything
*@args: argument
*/
void print_string(va_list args)
{
char *s = va_arg(args, char *);

if (s == NULL)
{
printf("(nil)");
}
printf("%s", s);
}
/**
*print_float - prints anything
*@args: argument
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
*print_all - prints anything
*@format: format
*/
void print_all(const char * const format, ...)
{
int i = 0;
char c;
va_list args;
va_start(args, format);

while (format[i])
{
c = format[i];

switch (c)
{
case 'c':
print_char(args);
break;
case 'i':
print_int(args);
break;
case 'f':
print_float(args);
break;
case 's':
print_string(args);
break;
}

if (format[i + 1] != '\0')
{
putchar(',');
putchar(' ');
}
i++;
}
printf("\n");
va_end(args);
}
