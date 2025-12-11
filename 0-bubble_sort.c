#include "sort.h"

/**
 * bubble_sort - sorts an array of integer in ascending order
 * @array: array to order
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, tmp, flag;
if (array == NULL || size < 2)
return;
for (j = 0; j < (size - 1); j++)
{
flag = 0;
for (i = 0; i < size - j - 1; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i];
array[i] = array[i + 1];
array[i + 1] = tmp;
flag = 1;
print_array(array, size);

}
}
if (flag == 0)
break;
}
}
