#include <stdio.h>
#include "dog.h"
/**
*print_dog - prints dog
*@d:struct
* Return: nothing
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{

printf("Name: ");
if (d->name == NULL)
{
printf("nil\n");
}
else
{
printf("%s\n", d->name);
}

printf("Age: ");
if (d->age == 0)
{
printf("nil\n");
}
else
{
printf("%f\n", d->age);
}

printf("Owner: ");
if (d->owner == NULL)
{
printf("nil");
}
else
{
printf("%s\n", d->owner);
}
}
}

