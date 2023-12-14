#include "sort.h"
/**
 * insertion_sort_list - Write a function that sorts a doubly linked
 * list of integers in ascending order
 * @list: Dobule linked list that wii be sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *dot;

	if (list == NULL || (*list)->next == NULL)
		return;
	dot = (*list)->next;
	while (dot)
	{
		while ((dot->prev) && (dot->prev->n > dot->n))
		{
			dot = swap(dot, list);
			print_list(*list);
		}
		dot = dot->next;
	}
}

/**
 *swap - Swap two nodes in a listint_t doubly-linked list.
 *@swno: node
 *@l: list of nodes
 *Return: return a pointer to a node
 */
listint_t *swap(listint_t *swno, listint_t **l)
{
	listint_t *behind = swno->prev, *now = swno;

	behind->next = now->next;
	if (now->next)
		now->next->prev = behind;
	now->next = behind;
	now->prev = behind->prev;
	behind->prev = now;
	if (now->prev)
		now->prev->next = now;
	else
		*l = now;
	return (now);
}
