#include "main.h"

/**
* read_textfile -  reads a text file and prints
* it to the POSIX standard output.
* @filename: filename
* @letters: numbers of letters printed
* Return: number of letters read and printed, 0 if filename is NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
if (!filename)
return (0);

int fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (0);
}

char *buf = malloc(letters);
if (!buf)
{
perror("Error allocating memory");
close(fd);
return (0);
}

ssize_t nrd, nwr;
while ((nrd = read(fd, buf, letters)) > 0)
{
nwr = write(STDOUT_FILENO, buf, nrd);
if (nwr == -1)
{
perror("Error writing to STDOUT");
close(fd);
free(buf);
return (0);
}
}
if (nrd == -1)
{
perror("Error reading from file");
close(fd);
free(buf);
return (0);
}
close(fd);
free(buf);
return (nwr);
}
