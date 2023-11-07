#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dog.h>
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *newDog;
    char *newName, *newOwner;

    newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
        return NULL;

    if (name != NULL) {
        newName = malloc(strlen(name) + 1);
        if (newName == NULL) {
            free(newDog);
            return NULL;
        }
        strcpy(newName, name);
    } else {
        newName = NULL;
    }

    if (owner != NULL) {
        newOwner = malloc(strlen(owner) + 1);
        if (newOwner == NULL) {
            free(newName);
            free(newDog);
            return NULL;
        }
        strcpy(newOwner, owner);
    } else {
        newOwner = NULL;
    }

    newDog->name = newName;
    newDog->age = age;
    newDog->owner = newOwner;

    return newDog;
}
