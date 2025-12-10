#include "sort.h"

/**
*
*
*
*
*
*/
void swap_nodes(listin_t **list, listin_t *a, listin_t *b)
{
	if (a->prev)
		a->prev->next = b;
	else
		*list = b;
	
	if (b->next)
		b->next->prev = a;
	
	a->next = b->next;
	b->prev = a->prev;

	b->next = a;
	a->prev = b;
}

/**
*
*
*
*
*
*/
void insertion_sort_list(listin_t **list)
{
	listin_t *current, *insert;

	if (!list || !*list || !(*list)->next)
		return(0);

	current = (*list)->next;

	while (current)
	{
		insert = current;
		current =current->next;

		while (insert ->prev && insert->n <inseert->prev->n)
		{
			swap_nodes(list, insert->prev, insert);
		}	
	}	
}