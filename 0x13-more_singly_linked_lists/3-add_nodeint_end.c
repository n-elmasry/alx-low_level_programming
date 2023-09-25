#include "lists.h"
/**
*add_nodeint_end - adds a new node at the beginning of a listint_t list
*@head: pointer to the head of the list
*@n: int
*Return: the address of the new element, or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *current;

if (head != NULL)
{
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}

temp->n = n;
temp->next = NULL;

if (*head == NULL)
{
*head = temp;
}
else
{
current = *head;

while (current->next != NULL)
{
current = current->next;
}
current->next = temp;
}
return (temp);
}




return (NULL);
}
