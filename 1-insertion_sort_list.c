#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm.
 *
 * @list: The doubly linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insert, *temp;

if (!list || !(*list) || !(*list)->next)
return;

current = (*list)->next;
while (current)
{
insert = current;
while (insert->prev && insert->n < insert->prev->n)
{
temp = insert->prev;
if (temp->prev)
temp->prev->next = insert;
else
*list = insert;

insert->prev = temp->prev;
temp->next = insert->next;
if (insert->next)
insert->next->prev = temp;
insert->next = temp;
temp->prev = insert;

print_list(*list);
}
current = current->next;
}
}
