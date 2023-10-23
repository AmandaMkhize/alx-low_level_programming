#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
