#include <stdlib.h>
#include <string.h>
/**
*_realloc -  reallocates a memory block using malloc and free
*@ptr: pointer
*@old_size: size1
*@new_size: size 2
* Return: returns a pointer to the allocated memory.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *newmem;
int csize;
newmem = malloc(new_size);

if (newmem == NULL)
{
return (NULL);
}

if (ptr == NULL)
{
return (newmem);
}

if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size < old_size)
{
csize = new_size;
}
else
{
csize = old_size;
}

memcpy(newmem, ptr, csize);
free(ptr);

return (newmem);
}
