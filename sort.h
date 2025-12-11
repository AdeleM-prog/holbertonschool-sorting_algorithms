#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
* struct listint_s -Doubly linked list node
*
*@n: Integer stored in the node
*@prev: Pointer to the previous element
*@next: Pointer to the next element
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;

/*
*==========================================================
* PRINTING FUNCTIONS
*==========================================================
*/


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*
*==========================================================
* SORTING ALGORITHMS
*==========================================================
*/

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/*
*==========================================================
* HELPERS FOR QUICK SORT 
*(MUST BE DEFINR IN 3-QUICK_SORT.C)
*==========================================================
*/


int lomuto_partition(int *array, int low, int high, size_t size);
void qs_recusion(int *array, int low, int high, size_t size);

#endif
