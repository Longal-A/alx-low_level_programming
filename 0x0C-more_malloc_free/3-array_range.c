#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: min range of stored values
 * @max: max range of stored values and number of elements
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
