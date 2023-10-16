#include "main.h"

/**
<<<<<<< HEAD
* print_int - print integer
* @args: the argument to print
* Return: number of character printed
*/

int print_int(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit, exp = 1;
	int i = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		m = -m;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}

/**
* print_dec - print decimal
* @args: argument to print
* Return: number of character printed
*/

int print_dec(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit, exp = 1;
	int i = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		m = -m;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}












/*
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
