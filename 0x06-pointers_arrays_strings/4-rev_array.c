#include "main.h"

/**
*reverse_array -   reverses the content of an array of integers
*@a: array
*@n: number of elements of the array
*Description:  reverses the content of an array of integers
* Return: 0
*/
void reverse_array(int *a, int n)
{

	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
