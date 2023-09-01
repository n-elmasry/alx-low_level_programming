#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
*main - prints the number of arguments passed into it
* Return: 0
*/
int main (int argc, char* argv[])
{
UNUSED(argv);
printf("%d\n", argc);
return(0);
}
