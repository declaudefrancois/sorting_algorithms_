#include <stdio.h>

#include "sort.h"


/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 *
 * @list: A pointer to a pointer to the head of a doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *tmp;
	listint_t *prev;

	if (!list || !(*list))
		return;

	curr = (*list)->next;
	while (curr)
	{
		tmp = curr;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			prev = tmp->prev;

			prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = prev;
			tmp->next = prev;

			tmp->prev = prev->prev;
			if (prev->prev)
				prev->prev->next = tmp;
			prev->prev = tmp;

			if (!tmp->prev)
				*list = tmp;
			print_list(*list);
		}

		curr = curr->next;
	}
}
