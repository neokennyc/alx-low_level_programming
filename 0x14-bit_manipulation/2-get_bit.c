#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 *  get_bit - returns the value of a bit at a given index
 *
 *	@n: number to be looked up in
 *  @index: the index at which we return the bit
 *
 *  Return: value of found bit or -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
