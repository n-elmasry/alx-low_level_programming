#include <stdio.h>
#include "dog.h"
/**
*init_dog- function
*@d:struct
*@name: name of the dog
*@age: age of the dog
*@owner: name of owner
* Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
