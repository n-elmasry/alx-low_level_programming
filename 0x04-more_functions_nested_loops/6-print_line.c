#include "main.h"

/**
*print_line - draws a straight line in the terminal.
*@n:the number of times the character _ should be printed
*Description: draws a straight line in the terminal.
* Return:Returns 0
*/
void print_line(int n)
{

int ln;

if (n > 0)
{
for (ln = 0; ln < n; ln++)

_putchar ('_');

}
_putchar('\n');
}
