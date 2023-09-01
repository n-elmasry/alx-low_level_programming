#include <stdio.h>
#include "main.h"
/**
*main -  prints its name, followed by a new line.
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{

printf("%s \n", argv[0]);
UNUSED(argc);
return (0);
}
