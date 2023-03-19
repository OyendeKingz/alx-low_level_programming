#include <stdio.h>

/**
 * main - ptints alphabets in reverse
 *
 * Return: always 0 Succes
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
