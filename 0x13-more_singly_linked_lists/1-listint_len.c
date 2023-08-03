#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the head of linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
