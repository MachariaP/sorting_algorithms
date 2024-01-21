#include "sort.h"

/**
 * swap - functions that swaps two integers in an array
 * @x: First integer to swap
 * @y: Second integer to swap
 *
 * Return: nothing
 */
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * lomuto_partition - function that orders subarray and places pivot
 * by using lomuto partitioning scheme
 *
 * @array: Array of integers to sort
 * @size: Size of array
 * @left: Starting index of subarray
 * @right: Ending index of subarray
 *
 * Return: partition index
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int l = left - 1, m;

	for (m = left; m <= right - 1; m++)
	{
		if (array[m] < array[right])
		{
			l++;
			if (l != m)
			{
				swap(&array[l], &array[m]);
				print_array(array, size);
			}
		}
	}
	if (l + 1 != right)
	{
		swap(&array[l + 1], &array[right]);
		print_array(array, size);
	}
	return (l + 1);
}

/**
 * lomuto_sort - fucntion that implement the quicksort algorithm
 * through recursion.
 * @array: array of integers to sort.
 * @size: The size of the array.
 * @left: starting index of the array
 * @right: ending index of the array
 *
 * Return: nothing
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int ind;

	if (right - left > 0)
	{
		ind = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, ind - 1);
		lomuto_sort(array, size, ind + 1, right);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using quicksort algorithm
 * @array: Array of integers to sort
 * @size: Size of array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
