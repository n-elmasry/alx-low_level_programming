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
int i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
