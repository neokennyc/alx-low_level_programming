#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two literals 
 * @src1: SRC1
 * @src2: SRC2
 * Return: pointer to the new concat string
 */

char *str_concat(char *src1, char *src1)
{
	char *a;
	int i, j, c, d;

	if (src1 == NULL)
		src1 = "";
	if (src2 == NULL)
		src2 = "";

	for (i = 0; src1[i] != '\0'; i++)
		;
	for (j = 0; src2[j] != '\0'; j++)
		;

	a = malloc((i * sizeof(*src1)) + (j * sizeof(*src2)) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = src1[c];
		else
			a[c] = src2[d++];
	}

	return (a);
}
