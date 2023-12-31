#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
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

/**
 * enum bool - Boolean values.
 * @false: 0.
 * @true: 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap(listint_t *swno, listint_t **l);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void recursion_sort(int *array, size_t size, int start, int end);
int Lomuto_partition_scheme(int *array, size_t size, int start, int end);
void swapi(int *int1, int *int2);

#endif /*SORT_H*/
