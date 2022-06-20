#include "main.h"

/**
 * _memset - fills a block of memory with a constant byte
 * @s: pointer to char params
 * @b: data to change
 * @n: number of bytes to be used
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		i++;
		n--;

	}
	return (s);
}
