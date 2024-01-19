#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	/* check for NULL array or array with less than 2 elements */
	if (array == NULL || size < 2)
		return;

	/* outer loop for each pass through the array */
	for (i = 0; i < size - 1; i++)
	{
		/* inner loop for each comparison and swap */
		for (j = 0; j < size - i -1; j++)
			/* compare adjacent elements and swap if need be */
			if (array[j] > array[j + 1]) 
			{
				/* swap array[j] and array[j + 1] */
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/* print the array after each swap */
				print_array(array, size);
			}
	}
}
