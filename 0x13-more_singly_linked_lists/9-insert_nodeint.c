#include "lists.h"

/**
 * insert_nodeint_at_index
 * @head: pointer to a pointer
 * @idx: int
 * @n: int
 *
 * Return: hex
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *node_t;

	if (!head && !*head)
		return (NULL);
	node_t = *head;

	if (idx == i)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;

		return (node);
	}
	else
	{
		while (node_t)
		{
			if (idx == i + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = node_t->next;
				node_t->next = node;

				return (node);
			}
			node_t = node_t->next;
			i++;
		}
	}

	return (NULL);
}
