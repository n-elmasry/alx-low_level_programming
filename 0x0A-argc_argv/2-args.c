#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*main -  prints all arguments it receives.
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return(0);
}
