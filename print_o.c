#include "main.h"

/**
* print_octal - conert octal
* @val: variable
* Return: c
*/

int print_octal(va_list val)
{
	int l, c = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		c++;
	}
	c++;
	array = malloc(sizeof(int) * c);

	for (l = 0; l < c; l++)
	{
		array[l] = tem % 8;
		tem = tem / 8;
	}
	for (l = c - 1; l >= 0; l--)
		_putchar(array[l] + '0');
	free(array);
	return (c);
}
