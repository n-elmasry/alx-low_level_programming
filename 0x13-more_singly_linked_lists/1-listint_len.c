#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list
*@h: pointer to the head of the list
*Return: umber of elements in a linked list
*/
size_t listint_len(const listint_t *h)
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
count++;
ptr = ptr->next;
}
return (count);
}
