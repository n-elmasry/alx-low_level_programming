#include "main.h"
#include <string.h>
/**
*append_text_to_file - appends text at the end of a file.
*@filename:  the name of the file to create
*@text_content: a NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file;
size_t written, len = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (-1);

file = open(filename, O_WRONLY | O_APPEND);
if (file < 0)
return (-1);

len = strlen(text_content);
written = write(file, text_content, len);
if (written == '\0')
{
close(file);
return (-1);
}

close(file);
return (1);
}
