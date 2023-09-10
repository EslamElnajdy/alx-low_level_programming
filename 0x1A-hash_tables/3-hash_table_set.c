#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash_table.
 * @key: the key to add.
 * @value: the value.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node = NULL, *old_head = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	new_node->key = (char *) strdup(key);
	new_node->value = (char *) strdup(value);
	new_node->next = NULL;
	if ((ht->array)[idx] == NULL)
	{
		(ht->array)[idx] = new_node;
		return (1);
	}
	else
	{
		old_head = (ht->array)[idx];
		while (old_head)
		{
			if (strcmp(old_head->key, key) == 0)
			{
				free(old_head->value);
				old_head->value = (char *) strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			old_head = old_head->next;
		}
		old_head = (ht->array)[idx];
		new_node->next = old_head;
		(ht->array)[idx] = new_node;
		return (1);
	}
}
