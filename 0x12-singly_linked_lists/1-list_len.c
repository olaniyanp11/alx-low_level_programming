#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list
 * @h : pointer to the first node
 * Return: the number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
