#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to a pointer.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *a;

	if (head == NULL)
	{
		return (0);
	}

	if (*head == NULL)
	{
		return (0);
	}

	a = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(a);

	return (i);
}
