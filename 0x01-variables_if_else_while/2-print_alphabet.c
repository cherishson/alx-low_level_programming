#include <stdio.h>

/**
 * main - program that prints lowercase alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
