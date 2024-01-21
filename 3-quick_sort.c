#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 *		- using the Quick sort algorithm (lomuto partition scheme).
 *
 * @array: The array to be stored.
 * @size: Number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	/* call the recursive function to perform quicksort */
	quicksort_recursive(array, 0, size - 1, size);
}

/**
 * quicksort_recursive - Recursive helper function for quicksort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: Number of elements in the array.
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int partitionIndex;

	/* Base case: partition has 1 or 0 elements */
	if (low < high)
	{
		/* partition the array and get the pivot index */
		partitionIndex = lomuto_partition(array, low, high, size);

		/* Recursively sort the sub-arrays */
		quicksort_recursive(array, low, partitionIndex - 1, size);
		quicksort_recursive(array, partitionIndex + 1, high, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme for quicksort.
 *
 * @array: array to be partitioned.
 * @low: starting index of the partition.
 * @high: ending index of the partation.
 * @size: Number of elements in the array.
 *
 * Return: The final position of the pivot element.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, temp;

	/* Choose the last element as the pivot */
	pivot = array[high];
	i = low - 1;

	/* Iterate through the partation */
	for (j = low; j <= high - 1; j++)
	{
		/* if current element is smaller or equal to pivot */
		if (array[j] <= pivot)
		{
			i++;
			/* swap array[i] and array[j] */
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			/* print array after each swap */
			print_array(array, size);
		}
	}

	/* Swap array[i + 1] and array[high] (pivot) */
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	/* print array after each swap */
	print_array(array, size);

	return (i + 1);
}
