#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		insert = current;
		current = current->next;

		while (insert->prev && insert->n < insert->prev->n)
		{
			listint_t *tmp_prev = insert->prev;
			listint_t *tmp_next = insert->next;

			if (tmp_prev->prev)
				tmp_prev->prev->next = insert;
			insert->prev = tmp_prev->prev;

			insert->next = tmp_prev;
			tmp_prev->prev = insert;

			tmp_prev->next = tmp_next;
			if (tmp_next)
				tmp_next->prev = tmp_prev;

			if (!insert->prev)
				*list = insert;

			print_list(*list);
		}
	}
}
