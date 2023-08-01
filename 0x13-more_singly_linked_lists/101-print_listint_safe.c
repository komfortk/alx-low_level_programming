#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts number of nodes in a lopped linked list
 * @head: pointer to the head of linked list being checked
 *
 * Return: 0 if the list is not looped, otherwise the number of nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *current;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	current = (head->next)->next;

	while (current)
	{
		if (temp == current)
		{
			temp = current;
			while (temp != current)
			{
				nodes++;
				temp = temp->next;
				current = current->next;
			}

			temp = temp->next;
			while (temp != current)
			{
				nodes++;
				temp = temp->next;
			}

			return (nodes);
		}

		temp = temp->next;
		current = (current->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safely prints a listint_t list
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
