#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: pointer
 * @n: the data.
 * Return: the address of the new element | NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tamp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tamp = *head;
	while (tamp->next != NULL)
		tamp = tamp->next;
	tamp->next = new_node;
	new_node->prev = tamp;

	return (new_node);
}
