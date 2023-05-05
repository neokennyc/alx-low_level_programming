#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 *  flip_bits - calculates the number of bits you would need to
 *              flip to get from one number to another
 *
 *	@n: Initial number to start from
 *  @m: final number to get to
 *
 *  Return: number of bits required
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
