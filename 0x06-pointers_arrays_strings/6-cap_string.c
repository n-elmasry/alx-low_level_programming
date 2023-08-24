#include "main.h"

/**
*cap_string - capitalizes all words of a string.
*@s: array of string
*Description: capitalizes all words of a string.
* Return:s
*/

char *cap_string(char *s)
{
int x = 0, i;
int countsep = 13;
char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

while (s[x])
{
i = 0;

while (i < countsep)
{
if ((x == 0 || s[x - 1] == sep[i]) && (s[x] >= 97 && s[x] <= 122))
s[x] -= 32;

i++;
}

x++;
}

return (s);
}

