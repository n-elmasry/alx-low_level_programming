#include "main.h"

/**
*factorial -   returns the factorial of a given number.
*@n: number to get !n.
* Return: factorial n or -1 to indicate an error.
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (1);
}
{
return (n * factorial(n - 1));

}
}
