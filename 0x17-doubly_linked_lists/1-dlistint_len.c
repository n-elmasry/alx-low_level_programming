#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 * Return: returns the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
int num = 0;
for (; h != NULL; num++)
{
h = h->next;
}
return (num);
}
