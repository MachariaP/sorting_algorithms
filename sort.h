#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* function prototype for bubble_sort */
void bubble_sort(int *array, size_t size);

/* function prototype for print_array */
void print_array(const int *array, size_t size);

/* function prototype for insertion_sort */
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);

/* function prototype for selection_sort */
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);

/* function prototype for quick_sort */
void swap(int *x, int *y);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/* function prototype for shell_sort */
void print_array(const int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif  /* SORT_H */
