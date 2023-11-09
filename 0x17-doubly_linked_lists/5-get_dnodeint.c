#include "lists.h"
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*@head: pointer to the head of the list
*@index: the index of the node, starting from 0
*Return: the nth node of a dlistint_t linked list or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *curr = head;

for (i = 0; curr != NULL; i++)
{
if (i == index)
{
return (curr);
}
curr = curr->next;
}
return (NULL);
}
