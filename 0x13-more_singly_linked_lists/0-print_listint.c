#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list.
*@h: pointer to the head of the list
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
const listint_t *ptr = NULL;
int count = 0;
if (h == NULL)
{
return (0);
}
ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;
}

return (count);
}
