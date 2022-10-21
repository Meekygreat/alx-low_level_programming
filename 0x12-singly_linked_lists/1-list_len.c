#include "lists.h"
/**
 * list_len - Function returns the number of elements in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t new;

	new = 0;
	while (h != NULL)
	{
		h = h->next;
		new++;
	}
	return (new);
}
