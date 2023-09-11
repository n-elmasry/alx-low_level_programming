#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
*new_dog - prints dog
*@name: name
*@age:age
*@owner: owner
* Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *mydog;
mydog = malloc(sizeof(dog_t));
if (mydog == NULL)
{
free(mydog);
return (NULL);
}
mydog->name = malloc(sizeof(char) * strlen(name) + 1);

if (mydog->name == NULL)
{
free(mydog);
return (NULL);
}
strcpy(mydog->name, name);
mydog->owner = malloc(sizeof(char) * strlen(owner) + 1);
if (mydog->owner == NULL)
{
free(mydog->name);
free(mydog);
return (NULL);
}
strcpy(mydog->owner, owner);
mydog->age = age;
return (mydog);
}

