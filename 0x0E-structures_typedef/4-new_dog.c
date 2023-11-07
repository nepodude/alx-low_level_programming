#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dog.h>
/**
 * new_dog - creates new frind dog hahaha
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int i, j;

    i = strlen(name);
    j = strlen(owner);

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog->name = malloc(sizeof(char) * (i + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }

    dog->owner = malloc(sizeof(char) * (j + 1));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    strcpy(dog->name, name);
    strcpy(dog->owner, owner);
    dog->age = age;

    return (dog);
}
