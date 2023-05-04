
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 *  binary_to_uint - converts binary number to unsigned int
 *
 *	@b: binary number to be converted
 *
 *  Return: converted number, 0 or 1
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
  
	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = num * 2 + (*b - '0');
		b++;
	}
	return (num);
}
