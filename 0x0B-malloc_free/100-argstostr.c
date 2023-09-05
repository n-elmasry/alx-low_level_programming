#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*argstostr - concatenates all the arguments of your program
*@ac:  1
*@av:  2
*Return: Returns a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char* ptr;

if (ac == 0 || av == 0)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
    len = len + strlen(av[i]) + 1;
}
ptr =(char *)malloc(len + 1);

if(ptr == NULL)
{
return (NULL);
}

j = 0;

for(i = 0; i < ac; i++)
{
strcpy(ptr + j , av[i]);
j = j + strlen(av[i]);
ptr[j] = '\n';
j++;
}
ptr[j] = '\0';
return (ptr);
}
