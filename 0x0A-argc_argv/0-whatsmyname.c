#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
*main -  prints its name, followed by a new line.
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s \n", argv[0]);
return (0);
}
