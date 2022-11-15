#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog -  free memory
 * @d: variable pointer
 *Return: zero
 **/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
