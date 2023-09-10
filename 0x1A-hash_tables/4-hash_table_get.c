#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash_table.
 * @key: the key to add.
 * Return: the valueassociated with the element,
 *			or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx;
	hash_node_t *old_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[idx] == NULL)
		return (NULL);
	if (strcmp((ht->array)[idx]->key, key) == 0)
	{
		return ((ht->array)[idx]->value);
	}
	old_node = (ht->array)[idx];
	while (old_node)
	{
		old_node = old_node->next;
		if (strcmp(old_node->key, key) == 0)
		{
			return (old_node->value);
		}
	}
	return (NULL);
}
