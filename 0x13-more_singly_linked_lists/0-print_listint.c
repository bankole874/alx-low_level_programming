#include "lists.h"

/**
 * print_listint - function that prints all the
 * elements of a listint_t list.
 * @h: list
 * Return: elements linked.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
/**
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


 * main - check the code
 *
 * Return: Always (0) Success.


int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
*/
