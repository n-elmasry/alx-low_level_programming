#ifndef dog_h
#define dog_h
/**
*struct dog - Short description
*@name: name of the dog
*@age: age of the dog
*@owner:name of the owner
*Description: Longer description
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/**
*init_dog - Short description
*@d: First member
*@name: Second member
*@age: age
*@owner: woner
* Description: Longer description
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
