#include "main.h"

/**
*_prime - check if number is prime
*@x: int num
*@y: int num
*Return: 1 if the input integer is a prime number, otherwise 0
*/
int _prime(int x, int y)
{
if (x <= 1 || (x != y && x % y == 0))
{
return (0);
}
else if (x == y)
{
return (1);
}
else
{
return (_prime(x, y + 1));
}
}
/**
*is_prime_number - returns 1 if input is a prime number, otherwise return 0.
*@n: int num to be checked
*Return:  1 if the input integer is a prime number, otherwise return 0.
*/
int is_prime_number(int n)
{
return (_prime(n, 2));
}
