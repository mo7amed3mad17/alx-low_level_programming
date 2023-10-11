#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * init_dog - init func
  * @d: input
  * @name: input
  * @age: input
  * @owner: input
  * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
