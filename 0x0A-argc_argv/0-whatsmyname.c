#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*main -  prints its name, followed by a new line.
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
return (0);
}
