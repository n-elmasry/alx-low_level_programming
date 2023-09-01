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
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", y * x);
return (0);
}
