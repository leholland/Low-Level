#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* new_dog - New dog
* @name: Name of new dog
* @age: Age of new dog
* @owner: New owner
* Return: ptr chars
**/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
int d_name, o_name, i;

for (d_name = 0; name[d_name] != '\0'; d_name++)
;
for (o_name = 0; owner[o_name] != '\0'; o_name++)
;

new = malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);

new->name = malloc(sizeof(char) * (d_name + 1));
if (new->name == NULL)
{
free(new);
return(NULL);
}

new->owner = malloc(sizeof(char) * (o_name + 1));
if (new->owner == NULL)
{
free(new);
free(new->name);
return(NULL);
}

for (i = 0; i <= d_name; i++)
new->name[i] = name[i];

new->age = age;
for(i = 0; i <= o_name; i++)
new->owner[i] = owner[i];
return (new);
}
