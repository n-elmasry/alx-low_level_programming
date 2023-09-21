#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;

if (head != NULL && str != NULL)
{
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);

temp->str = strdup(str);
temp->len = strlen(str);
temp->next = *head;

*head = temp;

return (temp);
}

return (0);
}
