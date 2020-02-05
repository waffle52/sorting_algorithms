#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Entry Point
 * @array: array of unordered ints
 * @size: size of the array
 * Description: sorts an array of ints using bubble sort)?
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
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
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
