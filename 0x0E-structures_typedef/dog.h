#ifndef DOG_H
#define DOG_H

	/**
	 * struct dog - dogs information
	 * @name: First mem
	 * @age: Second mem
	 * @owner: Third mem
	 *
	 * Description: Longer descr
	 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

	/**
	 * dog_t - typedef, struct dog
	 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int_strlen(char *s);

#endif
