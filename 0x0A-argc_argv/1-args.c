#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - prints the number of arguments passed into it
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
