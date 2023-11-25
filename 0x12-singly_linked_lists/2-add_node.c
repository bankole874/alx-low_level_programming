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
    temp->len = length; // new = "str", 3,
    temp->next = *head; // new = "str", 3, NULL

    *head = temp;

    return (temp);
}

// head =  null, null, 1024
// second = "Alexandro", sizeof("Alexandro"), 2024
// third = "Asaia", sizeof("Asaia"), 3024
// head = {}