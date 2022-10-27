#include "dog.h"

/**
 * init_dog - Initializes struct dog
 * @d: It's a variable!
 * @name: Variable to be initialized
 * @age: Another variable to be initialized
 * @owner: Another variable to be initialized
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
