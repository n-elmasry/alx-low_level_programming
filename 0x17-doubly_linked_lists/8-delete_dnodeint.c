#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *temp, *prev;

if (*head == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
temp->next->prev = NULL;
free(temp);
return (1); }

for (i = 0; i < index && temp != NULL; i++)
{
prev = temp;
temp = temp->next; }

if (temp == NULL)
return (-1);

prev->next = temp->next;

if (temp->next != NULL)
temp->next->prev = prev;

free(temp);
return (1); }
