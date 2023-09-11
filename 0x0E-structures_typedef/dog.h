#ifndef dog_h
#define dog_h
/**
 * struct dog - Short description
 * @name: name of the dog
 * @age: age of the dog
 * @owner:name of the owner
 *
 * Description: Longer description
 */

struct dog
{
char *name;
float age;
char *owner;
};
/**functions prototypes
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
