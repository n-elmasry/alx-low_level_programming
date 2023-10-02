#include "main.h"
/**
*main - copies the content of a file to another file.
*@argc: argc
*@argv: argv
*Return: 0
*/

int main(int argc, char *argv[])
{
FILE *file_from; 
int file_to;
char buffer[1024];
ssize_t reads, written;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = fopen(argv[1], "r");
if(file_from == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv [2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if(file_to < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((reads = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
{
written = write(file_to, buffer, reads);
if(written < 0)
{
perror("Error writing to file_to");
exit(99);
}
}
fclose(file_from);
close(file_to);
return (0);
}
