#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0'); /* Print the first digit of the first number */
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			result = a * b;

			if (result < 10)
			{
				_putchar(' '); /* Print an extra space for single-digit numbers */
				_putchar(result + '0'); /* Print the result */
			}
			else
			{
				_putchar((result / 10) + '0'); /* Print the tens digit */
				_putchar((result % 10) + '0'); /* Print the ones digit */
			}
		}
		_putchar('\n');
	}
}
