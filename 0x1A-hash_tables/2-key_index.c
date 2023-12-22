#include "hash_tables.h"
/**
  * key_index - get index
  * @key: the key
  * @size: size of the array
  * Return: index int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;
	unsigned long int hash_val = 0;

	hash_val = hash_djb2(key);
	idx = hash_val % size;
	return (idx);
}
