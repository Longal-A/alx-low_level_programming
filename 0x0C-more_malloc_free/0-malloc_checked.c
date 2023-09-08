#include <stdlib.h>
#include "main.h"

/**
 * *malloc checked - uses mallloc func to allocate memory
 * @b: allocated no of bytes
 * Return: pointer for allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
