#include "lists.h"
/**
*sum_dlistint - eturns the sum of all the data (n) of a dlistint_t linked list.
*@head: pointer to the head of the list
*Return: um of all the data (n) of a dlistint_t linked list or 0
*/
int sum_dlistint(dlistint_t *head)
{
int i, num = 0;

if (head == NULL)
{
return (0);
}

while (head != NULL)
{
for (i = 0; head != NULL; i++)
{
num += head->n;
head = head->next;
}
}
return (num);
}
