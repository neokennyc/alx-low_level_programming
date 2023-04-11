#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a matrix using malloc
 * @width: width
 * @height: height
 *
 * Return: return a pointer or null
 */
int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		d = (int **) malloc(height * sizeof(int *));
		/* we have to make a malloc per pointer*/
		if (!d)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			d[i] = (int *) malloc(width * sizeof(int));
			if (!d[i])
			{
				for (j = 0; j <= i; j++)
					free(d[j]);
				free(d);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				d[a][b] = 0;
			}
		}
		return (d);
	}
}
