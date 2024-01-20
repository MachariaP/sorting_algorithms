#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *			- in ascending order
 *			- using the Insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	/* check for NULL or an empty list */
	if (list == NULL || *list == NULL)
		return;

	/* Initialize the current pointer to the second node */
	current = (*list)->next;

	/* Traverse the list starting from the second node */
	while (current != NULL)
	{
		/* perform insertion sort */
		while (current->prev != NULL && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			/* Adjust pointers for the node to be moved */
			if (current->next != NULL)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->prev->prev;

			/* Update pointers of adjacent nodes */
			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			current->next->prev = current;

			/* Print the list after each swap */
			print_list(*list);
		}

		current = current->next;

	}

}
