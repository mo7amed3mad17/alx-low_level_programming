#include "dog.h"
#include <stddef.h>
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
	struct dog *ptr;

	ptr = &(*d);


	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	if (d == NULL)
		return;
}
