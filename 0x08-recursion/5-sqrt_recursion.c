#include "main.h"
/**
*_sqrt - gets square of number
*@x: int
*@y: int
*Return: x to the power of y or -1 if y < 0
*/
int _sqrt(int x, int y)
{
if (y * y == x)
{
return (y);
}
else if (y * y > x)
{
return (-1);
}
else
{
return (_sqrt(x, y + 1));
}
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: int to get its square.
 *Return: x to the power of y or -1 if y < 0
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 0));
}
