#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - adds numbers.
* @argc: number of arguments
* @argv: list of params
* Return: 1 if there's no number || 0 when success
*/
int main(int argc, char *argv[])
{
	int jk;
	long result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (jk = 1; jk < argc; jk++)
	{
		if (atoi(argv[jk]) != 0)
		{
			result += atoi(argv[jk]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", result);
	return (0);
}
