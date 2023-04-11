#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate using malloc
 * @s: string  dub
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *s)
{
	char *a;
	int i, c;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = s[c];
	a[c] = '\0';

	return (a);
}
