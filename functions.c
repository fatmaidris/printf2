#include "main.h"

/**
 * _putchar - prints characters to std output
 * @c: character to be printed
 * Return: 1 on success -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @list: argument to print
 * @count: track the number of printed character.
 * Return: print the character
*/

void print_char(va_list list, int *count)
{
	char c;

	c = (char)va_arg(list, int);
	_putchar(c);
	(*count)++;
}

/**
 * print_string - prints a string
 * @list: argument to print
 * @count: the number of printed characters
 * Return: prints the string
*/

void print_string(va_list list, int *count)
{
	char *str;

	str = va_arg(list, char *);
	while (*str)
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}

/**
 * print_percent - prints %
 * @list: argument
 * @count: number of printed characters
 * Return: print percent character
*/

void print_percent(va_list list, int *count)
{
	(void)list;
	_putchar('%');
	(*count)++;
}
