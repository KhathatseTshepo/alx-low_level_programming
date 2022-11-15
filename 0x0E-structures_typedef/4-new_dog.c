#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - pointer
 * @name: variable name of pet
 * @age: age of pet
 * @owner: propietarie of pet
 *Return: null
 **/


dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
unsigned int l1 = 0, l2 = 0, i, j;

dog = malloc(sizeof(dog_t));
if (name != NULL && owner != NULL && dog != NULL)
{
while (name[l1] != 0)
l1++;
while (owner[l2] != 0)
l2++;

dog->name = malloc((l1 + 1) * sizeof(char));
dog->owner = malloc((l2 + 1) * sizeof(char));

if (dog->name == NULL || dog->owner == NULL)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}
for (i = 0; i < l1; i++)
dog->name[i] = name[i];
dog->name[i] = 0;
dog->age = age;
for (j = 0; j < l2; j++)
dog->owner[j] = owner[j];
dog->owner[j] = 0;
return (dog);
}
return (NULL);
}
