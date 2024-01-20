#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *		- using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	/* Check for NULL array or array with less than 2 elements */
	if (array == NULL || size < 2)
		return;

	/* Outer loop for each pass through the array */
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Initialize swapped to false for each pass */

		/* Inner loop for each comparision and swap */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Compare adjacent elements and swap if there is need */
			if (array[j] > array[j + 1])
			{
				/* Swap array[j] and array[j + 1] */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* print the array after each swap */
				print_array(array, size);

				swapped = 1; /* Set swapped to true */
			}
		}

		/* If no two elements were swapped in inner loop, the array is sorted */
		if (swapped == 0)
			break;
	}
}
