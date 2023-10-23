#include "main.h"

int _putchar(char c)
{
	int print = write(1, &c, 1);

	return (print);
}
