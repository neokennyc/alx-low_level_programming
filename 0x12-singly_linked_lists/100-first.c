#include <stdio.h>
/**
 * hmain - function executed before main
 * Return: no return.
 */
void __attribute__((constructor))hmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
