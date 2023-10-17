#include "main.h"

/**
* print_rot - convert rot13
* @val: argument
* Return:counter
*/

int print_rot(va_list val)
{
	int l, h, c = 0;
	int u = 0;
	char *d = va_arg(val, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (l = 0; d[l]; l++)
	{
		u = 0;
		for (h = 0; a[h] && !u; h++)
		{
			if (d[l] == a[h])
			{
				_putchar(b[h]);
				c++;
				u = 1;
			}
		}
		if (!u)
		{
			_putchar(d[l]);
			c++;
		}
	}
	return (c);
}
