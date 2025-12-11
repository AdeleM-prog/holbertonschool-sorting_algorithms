#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list using insertion sort.
* @list: Double pointer to the head of the list.
*
* Description: Prints the list after every swap.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insert;
	listint_t *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		insert = current;
		current = current->next;

		while (insert->prev != NULL && insert->n < insert->prev->n)
		{
			prev = insert->prev;

			prev->next = insert->next;
			if (insert->next != NULL)
				insert->next->prev = prev;

			insert->next = prev;
			insert->prev = prev->prev;

			if (prev->prev != NULL)
				prev->prev->next = insert;
			else
				*list = insert;

			prev->prev = insert;

			print_list(*list);
		}
	}
}
