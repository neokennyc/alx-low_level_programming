#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 *  clear_bit - sets the value of a bit at an index to 0
 *
 *	@n: number to look up index
 *  @index: index at which to change the value of bit to 0
 *
 *  Return: 1 if successful, -1 otherwise
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
