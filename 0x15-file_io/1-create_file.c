#include "main.h"
#include <string.h>
/**
*create_file -  creates a file.
*@filename:  the name of the file to create
*@text_content: a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int file, written;
size_t len = 0;

if (filename == NULL)
return (-1);

file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (file < 0)
return (-1);

if (text_content != NULL)
{
len = strlen(text_content);
written = write(file, text_content, len);

if (written < 0)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
