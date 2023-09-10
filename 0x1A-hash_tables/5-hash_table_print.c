#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i = 0;
	int comma = 0;

	if (ht == NULL)
		return;
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (comma)
					printf(", ");
				printf("'%s'", node->key);
				printf(": ");
				printf("'%s'", node->value);
				node = node->next;
				comma = 1;
			}
		}
		printf("}\n");
	}
}
