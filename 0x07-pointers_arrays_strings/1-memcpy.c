#include "main.h"

/**
 * _memcpy - copy memory area,
 * @dest: the destination of memory area.
 * @src: the source memory area.
 * @n: the bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
