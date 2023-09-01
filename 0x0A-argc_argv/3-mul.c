#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies two numbers.
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y, mult;
if (argc < 3)
{
printf("Error\n");
return (1);
}
y = atoi(argv[2]);
x = atoi(argv[1]);
mult = y * x;
printf("%d\n", mult);
return (0);
}
