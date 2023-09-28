#include "main.h"

/**
*clear_bit -  sets the value of a bit to 0 at a given index.
*@n: int
*@index: the index, starting from 0 of the bit you want to get
*Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(unsigned long int)(1 << index);
return (1);
}
