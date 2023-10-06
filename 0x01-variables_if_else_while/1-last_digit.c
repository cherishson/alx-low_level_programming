#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point of code
 *
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, bright;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	bright = n % 10;
	/* your code goes there */
	if (bright > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, bright);
	else if (bright == 0)
		printf("Last digit of %d is %d and is 0\n", n, bright);
	else if (bright < 6  && bright != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, bright);

	return (0);
}
