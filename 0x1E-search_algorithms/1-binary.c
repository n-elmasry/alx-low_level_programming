#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - searches for a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the index where value is located or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
