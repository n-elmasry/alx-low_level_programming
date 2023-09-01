#include <stdio.h>
#include <stdlib.h>
/**
*main -  adds positive numbers
*@argc:  the number of arguments on the command line.
*@argv: array of character pointers listing all the arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
