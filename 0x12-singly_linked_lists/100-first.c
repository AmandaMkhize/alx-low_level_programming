#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * custom_init - prints a custom message before the main
 * function is executed
 */

void custom_init(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
