#include <stdio.h>
#include "sort.h"

/**
 * shell_sort - Entry point
 * @array: array of unordered ints
 * @size: size of array
 * Description: Sorts an array of ints using shell short)?
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, j, i;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (gap < size)
	{
		gap = gap * 3 + 1;
	}

	for (gap = size / 2; gap > 0; gap /= 3)
	{

		for (i = gap; i < size; i += 1)
		{
			temp = array[i];

			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
	}
}
