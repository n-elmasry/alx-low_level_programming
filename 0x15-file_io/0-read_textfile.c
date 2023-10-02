#include "main.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard outputt
*@filename: is pointing to a string of 0 and 1 chars
*@letters: the number of letters it should read and print
*Return: the actual number of letters it could read and print,or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *buffer;
size_t readl,  written;

if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file < 0)
return (0);

buffer = malloc(letters + 1);
if (buffer == NULL)
{
close(file);
return (0);
}
readl = read(file, buffer, letters);
buffer[readl] = '\0';

written = write(STDOUT_FILENO, buffer, readl);
if (written != readl)
{
close(file);
free(buffer);
return (0);
}
close(file);
free(buffer);
return (readl);
}
