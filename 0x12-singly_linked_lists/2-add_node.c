#include "lists.h"

/**
 * add_node - add node.
 * @head: var head.
 * @str: variable str.
 * Return: int and str.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *temp = malloc(sizeof(struct list_s));
    int length= 0;
    if (temp == NULL)
    {
        return (NULL);
    }

    while (str[length])
    {
        length++;
    }

    temp->str = strdup(str);
    temp->len = length;
    temp->next = *head;

    *head = temp;

    return (temp);
}