#include "main.h"

/**
* print_rev - print a string in reverse
* @val: arument
* Return: the string
*/

int print_rev(va_list val)
{
	int l;
	int h = 0;
	char *d = va_arg(val, char*);

	while (d[h] != '\0')
		h++;
	for (l = h - 1; l >= 0; l++)
		_putchar(d[l]);
	return (h);
}
