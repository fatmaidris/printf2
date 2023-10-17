#include "main.h"

/**
* print_str - print string
* @val: value
* Return: number of character
*/

int print_str(va_list val)
{
	int l, len = 0;
	char *d;
	int value;

	d = va_arg(val, char *);
	for (l = 0; d[l] != '\0'; l++)
	{
		if (d[l] < 32 || d[l] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = d[l];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_X_ext(value);
		}
		else
		{
			_putchar(d[l]);
			len++;
		}
	}
	return (len);
}
