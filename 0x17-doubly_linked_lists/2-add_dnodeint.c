#include "lists.h"
/**
 * add_dnodeint - insert new node at the beginning.
 * @head: pointer to the first node.
 * @n: the data.
 * Return: the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
