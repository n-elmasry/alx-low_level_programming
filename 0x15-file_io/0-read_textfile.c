#include "main.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard outputt
*@filename: is pointing to a string of 0 and 1 chars
*@letters: the number of letters it should read and print
*Return: the actual number of letters it could read and print,or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
size_t read;

if (filename == NULL)
return (0);

file = fopen(filename, "r");
if (file == NULL)
return (0);

buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(file);
return (0);
}
read = fread(buffer, 1, letters, file);
buffer[read] = '\0';

if (read <= 0 || fwrite(buffer, 1, read, stdout) != read)
{
fclose(file);
free(buffer);
return (0);
}
fclose(file);
free(buffer);
return (read);
}
