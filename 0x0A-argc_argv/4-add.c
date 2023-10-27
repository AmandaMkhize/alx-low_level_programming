#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if a string contains only digits
 * @str: String to be checked
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the sum of valid integers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;

	count = 1;
	while (count < argc) /* Goes through the whole array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /* Print sum */
	return (0);
}
