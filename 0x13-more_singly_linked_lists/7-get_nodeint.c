#include "lists.h"
/**
*get_nodeint_at_index -  frees a listint_t list.
*@head: pointer to the head of the list
*@index:the index of the node, starting at 0
*Return: n or 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head == NULL)
{
return (NULL);
}

while (head)
{
if (count == index)
{
return (head);
}
head = head->next;
count++;
}
return (NULL);
}
