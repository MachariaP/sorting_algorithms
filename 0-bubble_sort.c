#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending
* order using the Bubble sort algorithm
* @array: input array of integers
* @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int swap_counter = -1;

	/*Array does not need to be sorted if < 2*/
	if (array == NULL || size < 2)
	{
		return;
	}

	/*loops until swap_counter*/
	while (swap_counter)
	{
		swap_counter = 0;
		for (i = 0; i < size - 1; i++)
		{
			/*if adjacent elements not in expected order */
			if (array[i] > array[i + 1])
			{
				/*swap them */
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				/*increment swap_counter*/
				swap_counter++;

				/*print array*/
				print_array(array, size);
			}
		}
	}
}
