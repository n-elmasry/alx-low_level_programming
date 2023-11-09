#include "lists.h"
/**
*free_dlistint - frees a dlistint_t list.
*@head: pointer to the head of the list
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *curr = head;
if (head == NULL)
{
exit(1);
}

while (curr->next != NULL)
{
curr = curr->next;
free(curr->prev);
}

free(curr);
head = NULL;
}
