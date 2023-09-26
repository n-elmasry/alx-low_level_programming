#include "lists.h"

/**
*pop_listint -  frees a listint_t list.
*@head: pointer to the head of the list
*Return: n or 0
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (head == NULL || *head == NULL)
{
return (0);
}

temp = *head;
*head = (*head)->next;
num = temp->n;

free(temp);

return (num);
}
