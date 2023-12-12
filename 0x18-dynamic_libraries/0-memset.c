#include "main.h"

/**
 * _memset -fill memory with constant values
 * @w: pointer to char params
 * @b: constant byte
 * @m: byte of mem area
 * Return: *s
 */

char *_memset(char *w, char b, unsigned int m)
{
	unsigned int i;

	for (i = 0; i < m; i++)
	{
	w[i] = b;
	}
	return (w);
}
