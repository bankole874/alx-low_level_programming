#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: head
 * @index: index of the node.
 *
 * Return: nth node of a listint_t
 * linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t;

	while (head)
	{
		t = head;
		if (i == index)
			return (t);
		head = head->next;
		i++;
	}

	return (NULL);
}
