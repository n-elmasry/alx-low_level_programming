#include "hash_tables.h"
/**
* hash_table_set - adds an element to the hash table.
* @value: the value associated with the key.
* @key: is the key
* @ht: the hash table you want to add or update the key/value to
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned int index;
hash_node_t *new_node;


if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}

index = key_index((unsigned char *)key, ht->size);
new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
{
return (0);
}

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
