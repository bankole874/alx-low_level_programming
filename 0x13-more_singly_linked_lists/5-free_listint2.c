#include "lists.h"

/**
 * free_listint2 -  function that
 * frees a listint_t list.
 * @head: pointer to a pointer
 *
 * Return: Always (0) success.
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		a = *head;
		*head = (*head)->next;
		free(a);
	}
}
