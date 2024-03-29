#include "lists.h"
/**
 * print_dlistint - print all the elements of a list
 *
 * @h: pointer to the first node
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
