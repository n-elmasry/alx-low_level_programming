#include "main.h"
#include <stddef.h>
/**
*_strchr - locates a character in a string
*@s: string to be scanned
*@c: character to be searched in s
*Description: locates a character in a string
* Return: pointer to character c in s, or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (NULL);
}
