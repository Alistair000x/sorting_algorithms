#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers using Bubble Sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array
 *
 * Return: No return value (void)
 */
void bubble_sort(int *array, size_t size)
{
size_t outer, inner;
int temp;
int swapped;
if (array == NULL || size < 2)
return;
for (outer = 0; outer < size - 1; outer++)
{
swapped = 0;
for (inner = 0; inner < size - outer - 1; inner++)
{
if (array[inner] > array[inner + 1])
{
temp = array[inner];
array[inner] = array[inner + 1];
array[inner + 1] = temp;
swapped = 1;
print_array(array, size);
}
}
if (swapped == 0)
break;
}
}
