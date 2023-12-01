#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key.
* @key: is the key
* @ht: the hash table you want to add or update the key/value to
* Return:  the value associated with the element, or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned int index;
hash_node_t *node;

index = key_index((unsigned char *)key, ht->size);
for (node = ht->array[index]; node != NULL; node = node->next)
{
if (strcmp(node->key, key) == 0)
{
return (node->value);
}
}
return (NULL);
}
