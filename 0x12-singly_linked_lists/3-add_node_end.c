#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list, *temp;

if (str != NULL)
{
new_list = malloc(sizeof(list_t));
if (new_list == NULL)
return (NULL);

new_list->str = strdup(str);
new_list->len = strlen(str);
new_list->next = NULL;
if (*head == NULL)
{
*head  = new_list;
return (*head);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;

temp->next = new_list;
return (temp);
}
}

return (NULL);
}
