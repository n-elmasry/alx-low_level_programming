#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int num = 0;

for (num = 0; h != NULL; num++)
{
printf("%i\n", h->n);
h = h->next;
}

return (num);
}
