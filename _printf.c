#include "main.h"

/**
 * _printf - custom printf.
 * @format: string contain the specifires.
 * Return: number of printed characters.
*/

int _printf(const char *format, ...)
{
	unsigned long int i;
	int count = 0;
	va_list list;
	format_t form[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent}
	};

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		for (i = 0; i < sizeof(form) / sizeof(form[0]); i++)
		{
			if (*format == form[i].special)
			{
				form[i].call(list, &count);
				break;
			}
		}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
