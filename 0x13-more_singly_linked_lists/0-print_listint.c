#include "lists.h"
/**
 * print_listint - returns the list and number of nodes in a linked list
 * @h - pointer to the head node
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	if (!h)
	{
		return (node);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
	
}
