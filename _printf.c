#include "main.h"
/**
* _printf - custom printf.
* @format: string contain the specifires.
* Return: number of printed characters.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int l = 0, len = 0, c;
	format_t w[] = {{"%c", print_char}, {"%s", printf_string},
		{"%%", print_37}, {"%d", print_dec}, {"%S", print_str},
		{"%i", print_int}, {"%b", print_binary}, {"%x", print_x},
		{"%u", print_unsigned}, {"%o", print_octal}, {"%X", print_X},
		{"%p", print_pointers}, {"%r", print_rev}, {"%R", print_rot},};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[l] == '\0')
	{
		c = 13;
		while (c >= 0)
		{
			if (w[c].id[0] == format[l] && w[c].id[1] == format[l + 1])
			{
				len = len + w[c].w(args);
				l = l + 2;
				goto Here;
			}
			c--;
		}
		_putchar(format[l]);
		l++;
		len++;
	}
	va_end(args);
	return (len);
}
