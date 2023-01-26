#include "lists.h"

/**
 * free_list - frees a linked list
 * @head : a pointer to the first node
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *temp = head, *next = NULL;

	while (temp)
	{
		free(temp->str);
		next = temp->next;
		free(temp);
		temp = next;
	}
}
