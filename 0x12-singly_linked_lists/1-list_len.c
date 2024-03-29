#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - lists length.
 * @h: var h.
 * Return: int.
 */

size_t list_len(const list_t *h)
{
int count = 0;
if (h == NULL)
{
return (0);
}
while (h->next != NULL)
{
count++;
h = h->next;
}
return (count + 1);
}
