#include <main.h>


/**
 * main - program that prints the alphabet in lowercase
 *
 *  Return: Always 0.
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
