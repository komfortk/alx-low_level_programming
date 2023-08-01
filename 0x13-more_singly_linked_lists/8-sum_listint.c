#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of linked list
 *
 * Return: resulting sum or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
