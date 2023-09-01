#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
*main - prints the number of arguments passed into it
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
UNUSED(argv);
printf("%d\n", argc);
return (0);
}
