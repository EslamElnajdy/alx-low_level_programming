#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked list.
 * @h: pointer to the first node
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
