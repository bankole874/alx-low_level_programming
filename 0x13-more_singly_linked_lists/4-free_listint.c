#include "lists.h"

/**
 * free_listint - a function that
 * frees a listint_t list.
 * @head: a pointer.
 * Return: Always (0) Success.
 */

void free_listint(listint_t *head)
{
	listint_t a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
