#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the pointer to the first node.
 * @idx: the index where the new node should be added.
 * @n: the data.
 * Return: the address of the new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *head = *h;


	if (idx == 0)
		return(add_dnodeint(h, n));
	
	while (i < idx - 1)
	{
		if (head == NULL)
			return (NULL);
		head = (head)->next;
		i++;
	}
	if ((head)->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = head->next;
	new_node->prev = head;
	head->next->prev = new_node;
	head->next = new_node;

	return (new_node);
	
}
