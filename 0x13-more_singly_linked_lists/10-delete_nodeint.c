#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index in linked list
 * @head: pointer to a pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 (success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp; i++)
	{
		temp = temp->next;
	}

	if (!temp || !(temp->next))
		return (-1);

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
