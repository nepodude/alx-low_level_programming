#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - to initialize type struct dog
 * @d: pointer to struct dog to initialize it
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
if (d == NULL)
d = malloc(sizeof(dog));
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
