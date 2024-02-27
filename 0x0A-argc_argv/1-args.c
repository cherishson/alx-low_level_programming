#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointer to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
