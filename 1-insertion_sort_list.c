#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 *                       using the Insertion Sort algorithm.
 * @list: A pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *previous, *next_node;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
current = (*list)->next;
while (current != NULL)
{
previous = current->prev;
next_node = current->next;
while (previous != NULL && previous->n > current->n)
{
previous->next = current->next;
if (current->next != NULL)
current->next->prev = previous;
current->next = previous;
current->prev = previous->prev;
previous->prev = current;
if (current->prev == NULL)
*list = current; 
if (previous->next != NULL)
previous->next->prev = previous;
previous->next = next_node;
print_list(*list);
}
current = next_node;
}
}
