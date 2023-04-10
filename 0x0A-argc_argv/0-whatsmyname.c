#include <stdio.h>
/**
 * main -prints name followed by new line.
 * @argc: number of command line arguments.
 * @argv: the array that contains the program line command arguments.
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
