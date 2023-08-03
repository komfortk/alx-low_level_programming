#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer to the head of linked list
 *
 * Return: the head nodes's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
