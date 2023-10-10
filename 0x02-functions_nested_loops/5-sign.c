#include <limits.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: (1) and prints + if n is greater than zero, (0) and prints 0 if n is zero,
 *         (-1) and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

int main(void)
{
	print_sign(98);     /* Correct output: + */
	print_sign(0);      /* Correct output: 0 */
	print_sign(0xff);   /* Correct output: + */
	print_sign(-1);     /* Correct output: - */
	print_sign(99);     /* Correct output: + */
	print_sign(INT_MAX); /* Correct output: + */
	print_sign(INT_MIN); /* Correct output: - */
	print_sign(-4);     /* Correct output: - */

	return (0);
}
