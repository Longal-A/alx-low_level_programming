#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets variable type struct dog
 *
 * @d: pointer for struct dog
 * @name: name
 * @age: age particulars
 * @owner:owner det
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

}
