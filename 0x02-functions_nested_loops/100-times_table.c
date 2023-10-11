#include "main.h"

/**
 * print_times_table - Prints the n times table.
 * @n: The number for which to print the times table.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int a, b, result;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');
			result = a * b;
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
