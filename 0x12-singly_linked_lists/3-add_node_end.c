#include "lists.h"

/**
 * add_node_end - add end node.
 * @head: var head.
 * @str: variable str.
 * Return: int and str.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = malloc(sizeof(list_t));
int length = 0;

while (str[length])
{
length++;
}

temp->str = strdup(str);
temp->len = length;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
return (temp);
}

list_t *current = *head;

while (current->next != NULL)
{
current = current->next;
}
current->next = temp;
return (temp);
}