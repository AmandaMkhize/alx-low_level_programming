#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @otherNumber: second number
* Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int otherNumber)
{
	unsigned long int exclusive = n ^ otherNumber;
	unsigned int countbit = 0;

	while (exclusive)
	{
	countbit += exclusive & 1;
	exclusive >>= 1;
	}

	return (countbit);
}
