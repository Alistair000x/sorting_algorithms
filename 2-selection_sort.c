#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection Sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
size_t current_index, compare_index, min_index;
int temp;
if (array == NULL || size < 2)
return;
for (current_index = 0; current_index < size - 1; current_index++)
{
min_index = current_index;
for (compare_index = current_index + 1; compare_index < size; compare_index++)
{
if (array[compare_index] < array[min_index])
min_index = compare_index;
}
if (min_index != current_index)
{
temp = array[current_index];
array[current_index] = array[min_index];
array[min_index] = temp;
print_array(array, size);
}
}
}
