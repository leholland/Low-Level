#include <stdio.h>
#include "dog.h"

/**
* init_dog - Initalizes a variable of a type struct dog
* @d: Ptr to variable
* @name: Name of the dog
* @age: Age of dog
* @owner: Owner of dog
**/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}


