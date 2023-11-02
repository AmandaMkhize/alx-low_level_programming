#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - function allocates memory using malloc
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
