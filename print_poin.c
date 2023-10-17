#include "main.h"

/**
* print_pointers - print pointer
* @val: value
* Return: int
*/

int print_pointers(va_list val)
{
	char *p = "(nil)";
	void *d;
	int l, z;
	long int g;

	d = va_arg(val, void *);
	if (d == NULL)
	{
		for (l = 0; p[l] != '\0'; l++)
			_putchar(p[l]);
		return (l);
	}
	g = (unsigned long int)d;
	_putchar('0');
	_putchar('x');
	z = print_x_ext(g);
	return (z + 2);
}
