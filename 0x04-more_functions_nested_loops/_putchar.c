#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	int i;

	i = write(1, &c, 1);

	return (i);
}
