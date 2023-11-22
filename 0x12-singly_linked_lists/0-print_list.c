#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints list.
 * @h: var h.
 * Return: int.
 */

size_t print_list(const list_t *h)
{
int count;

count = 0;
if (h == NULL)
{
return (0);
}
if (h->str == NULL)
{
printf("[%d] ", 0);
printf("(%s)\n", "nil");
h = h->next;
count++;
}

while (h != NULL)
{
printf("[%d] ", h->len);
printf("%s\n", h->str);
h = h->next;
count++;
}

return (count);

}

