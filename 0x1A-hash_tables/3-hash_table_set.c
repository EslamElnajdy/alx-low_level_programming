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
	char *value_cpy;
	unsigned long int idx, i = 0;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	if (strcmp(ht->array[i]->key, key) == 0)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = value_cpy;
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = value_cpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
