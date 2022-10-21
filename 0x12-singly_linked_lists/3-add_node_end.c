#include "lists.h"

/**
 * add_node_end - Fuction adds a new node at the end
 * of a  list.
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t newchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;

	new->len = newchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
