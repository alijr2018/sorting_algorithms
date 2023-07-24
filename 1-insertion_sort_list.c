#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending,
 * order using Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next_node, *prev_node;

	if (!list || !(*list) || !((*list)->next))
		return;

	curr = (*list)->next;
	while (curr)
	{
		next_node = curr->next;
		prev_node = curr->prev;

		if (prev_node && curr->n >= prev_node->n)
		{
			curr = next_node;
			continue;
		}

		while (prev_node && curr->n < prev_node->n)
		{
			if (prev_node->prev)
				prev_node->prev->next = curr;
			else
				*list = curr;
			if (curr->next)
				curr->next->prev = prev_node;

			prev_node->next = curr->next;
			curr->prev = prev_node->prev;

			curr->next = prev_node;
			prev_node->prev = curr;

			print_list(*list);
			prev_node = curr->prev;
		}
		curr = next_node;
	}
}

