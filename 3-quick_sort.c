#include "sort.h"
#include <stdio.h>

/**
 * quick_sort - Entry Point
 * @array: array of ints
 * @size: size of the array
 * Description: checks if array is null otherwise calls function)?
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	partition_controller(array, 0, size - 1);
}

/**
 * partition_controller - recursive function to go through array
 * @array: array of ints
 * @low: low index of array to sort
 * @high: high index of array sort
 * Description: calls function recursivly to sort data in unordered list)?
 */

void partition_controller(int *array, int low, int high)
{
	int id = 0;

	if (low < high)
	{
		id = partition(array, low, high);
		partition_controller(array, low, id - 1);
		partition_controller(array, id + 1, high);
	}
}

/**
 * partition - find ints to swap
 * @array: array of unordered ints
 * @low: low index to go through
 * @high: high of index to go through
 * Description: finds elements out of order and then calls function to swap
 * Return: area of array gone through
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[j] != array[i])
			{
				swap(&array[i], &array[j]);
				print_array(array, sizeof(array) + 2);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, sizeof(array) + 2);
	}
	return (i + 1);
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
