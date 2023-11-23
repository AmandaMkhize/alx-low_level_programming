#include "main.h"

/**
* binary_to_uint - function converts a binary number to an unsigned int.
* @b: pointer to a string
* Return: the converted number, or 0 if one or
* more chars in the string b is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
	return (0);

	a = 0;
	while (b[a] != '\0')

	{
	if (b[a] != '0' && b[a] != '1')
	return (0);
	a++;
	}

	a = 0;
	while (b[a] != '\0')

	{
	num <<= 1;
	if (b[a] == '1')
	num += 1;
	a++;
	}

	return (num);
}
