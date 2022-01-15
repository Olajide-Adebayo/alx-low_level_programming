#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t t;

	for (t = 0; h != NULL; t++)
		h = h->next;
	return (t);
}
