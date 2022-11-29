#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function pointer
 * @head: a pointer to a pointer.
 * @n: node that store data.
 * Return: new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	endnode = *head;

	while (endnode->next != NULL)
	{
		endnode = endnode->next;
	}
	endnode->next = newnode;

	return (newnode);
}
