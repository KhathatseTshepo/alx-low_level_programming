#include "dog.h"

/**
 * init_dog - call structure dog and assigns parameters
 * @d: pointer
 * @name: variable name
 * @age: variable float to age
 * @owner: variable to name of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
