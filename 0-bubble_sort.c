#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array give, using bubble sort algorithm.
 *
 * @array: integer array to be sorted.
 * @size: integer size of an array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (i = 0; i < size; i++)
	{
		unsigned int swap = 0;

		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				/* swapping */
				int temp = array[j];

				array[j] = array[j - 1];
				array[j - 1] = temp;
				swap = 1;
			}
			print_array(array, size);
		}
		if (!swap)
			break;
	}
}
