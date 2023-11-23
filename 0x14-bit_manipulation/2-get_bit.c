#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
* get_bit - function returns the value of a bit at a given index
* @n: number to check bits in
* @index: index, starting from 0 of the bit you want to get
* Return: value of the bit, or -1 if there is an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int *mask = malloc(sizeof(unsigned long int));
int result = -1;

if (mask == NULL || index > (sizeof(unsigned long int) * 8 - 1))
{
free(mask);
exit(EXIT_FAILURE);
}

*mask = 1;
*mask <<= index;

result = ((n & *mask) ? 1 : 0);

free(mask);

return (result);
}
