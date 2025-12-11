#include "sort.h"
/**
 * lomuto_partition - lomuto partition scheme
 * @beginning : start index
 * @end: end index
 * @array: The array to sort
 * @size: Number of elements in @array
 * Return: int
 */
int lomuto_partition(int *array, int beginning, int end, size_t size)
{
int pivot = array[end];
int i = beginning - 1;
int j = 0, tmp;
for (j = beginning; j < end; j++)
{
if (array[j] <= pivot)
{
i++;
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
tmp = array[i + 1];
array[i + 1] = array[end - 1];
array[end - 1] = tmp;
print_array(array, size);

return (i + 1);
}

/**
 * quick_sort_recursive - recursive quick sort
 * @beginning : start index
 * @end: end index
 * @array: The array to sort
 * @size: Number of elements in @array
 */
void quick_sort_recursive(int *array, int beginning, int end, size_t size)
{
int pivot;
if (end > beginning)
{
pivot = lomuto_partition(array, beginning, end, size);
quick_sort_recursive(array, beginning, pivot - 1, size);
quick_sort_recursive(array, pivot + 1, end, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 *
 * @array: The array to sort
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursive(array, 0, (int)size - 1, size);
}
