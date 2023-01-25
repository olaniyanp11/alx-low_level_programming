#include "lists.h"

/**
 * print_list - a function that prints
 * all the elements of a list
 *
 * @h : the pointer t the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		node++;
	}
	return (node);
}
