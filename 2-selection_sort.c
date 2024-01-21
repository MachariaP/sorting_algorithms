#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *		- using the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;
	int temp;

	/* check for NULL array or array with less than 2 elements */
	if (array == NULL || size < 2)
	{
		return;
	}

	/* Iterate through the entire array */
	for (i = 0; i < size; i++)
	{
		/* Assume the current index is the minimum */
		minIndex = i;

		/* Find the minimum element in the unsorted part of the array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}

		/* Swap the found minimum element with the first element of the unsorted part */
		if (minIndex != i)
		{
			temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;

			/* print array after each swap */
			print_array(array, size);
		}
	}
}
