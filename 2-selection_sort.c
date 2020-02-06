#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - Entry Point
 * @array: array of unordered ints
 * @size: size of the array
 * Description: sorts an array of unordered ints using selection sort)?
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;

	if (array == NULL)
	{
		return;
	}

	for (i = 0; i < (size - 1); i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
			}
		}
		if (idx != i)
		{
			swap(&array[idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swap ints
 * @x: pointer to int in array
 * @y: pointer to int in array
 * Description: swaps int in the array)?
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
