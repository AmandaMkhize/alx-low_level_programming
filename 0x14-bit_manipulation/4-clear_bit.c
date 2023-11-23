#include "main.h"
#include <stdlib.h>

/**
* clear_bit - function sets the value of a bit to 0 at a given index
* @n: parameter
* @index: index of bit to set
* Return: 1 if success, -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
	return (-1);

	*n &= ~(1UL << index);

	return (1);
}
