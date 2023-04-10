#include <stdio.h>
/**
 * main - prints all arguments received.
 * @argc: number of command line arguments.
 * @argv: the array that contains the program command line arguments.
 * Return: 0 when success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
