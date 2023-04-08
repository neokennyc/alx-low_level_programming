#include <stdio.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: zero to the function call
 */


int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
