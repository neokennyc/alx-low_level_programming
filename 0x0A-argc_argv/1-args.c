#include "stdio.h"

/**
 * main - Entry point
 * @argc: number of params
 * @argv: array of params
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
char *ptr;
ptr = &argv;

	printf("%d\n", argc - 1);

	return (0);
}
