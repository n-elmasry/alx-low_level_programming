#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: first int
*@b: second int
*Description: swaps the values of two integers.
* Return: int
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
