#include "lists.h"
/**
*delete_nodeint_at_index - deletes the node at index of a linked list
*@head: pointer to the head of the list
*@index: the index of the node that should be deleted.
*Return: 1 if it succeeded, -1 if it failed
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *previous, *current;
unsigned int i;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
previous = *head;
current = (*head)->next;

for (i = 1; current != NULL && i < index; i++)
{
previous = current;
current = current->next;
}
if (current == NULL)
{
return (-1);
}
previous->next = current->next;
free(current);
return (1);
}
