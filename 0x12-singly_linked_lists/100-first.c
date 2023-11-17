#include <stdio.h>

void custom_message(void) __attribute__ ((constructor));

/**
 * custom_message - prints a message before the main
 * function is executed
 */

void custom_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
