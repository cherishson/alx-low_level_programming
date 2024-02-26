#include "main.h"
#include <unistd.h>



int _putchar(char c)
{
	int put = write(1, &c, 1);

	return (put);
}
