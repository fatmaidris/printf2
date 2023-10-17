#include "main.h"

/**
* print_binary - conversion specifiers
* @val: argument
*
* Return: integer
*/

int print_binary(va_list val)
{
	int f = 0;
	int m = 0;
	int l, i = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (l = 0; l < 32; l++)
	{
		p = ((i << (32 - l)) & num);
		if (p >> (31 - l))
			f = 1;
		if (f)
		{
			b = p >> (31 - l);
			_putchar(b + 48);
			m++;
		}
	}
	if (m == 0)
	{
		m++;
		_putchar('0');
	}
	return (m);
}
