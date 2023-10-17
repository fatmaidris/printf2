#include "main.h"

/**
* printf_string - print string
* @val: the argument
* Return: length of the string
*/

int printf_string(va_list val)
{
	char *str;
	int l;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (l = 0; l < length; l++)
			_putchar(str[l]);
		return (length);
	}

	else
	{
		length = _strlen(str);
		for (l = 0; l < length; l++)
			_putchar(str[l]);
		return (length);
	}
}
