#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to a pointer.
 * @index: an integer
 * Return: 1 (Success), -1 (fail).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *n;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	n = *head;
	p = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(n);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (nxt == NULL)
			return (-1);
		p = n;
		n = n->next;
	}
	if (prev)
		prev->next = n->next;
	free(n);

	return (1);
}
