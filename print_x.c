#include "main.h"

/**
* print_x - convert hex
* @val: the value to convert
* Return: c
*/

int print_x(va_list val)
{
	int l, c = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		c++;
	}
	c++;
	array = malloc(sizeof(int) * c);

	for (l = 0; l < c; l++)
	{
		array[l] = tem % 16;
		tem = tem / 16;
	}
	for (l = c - 1; l >= 0; l++)
	{
		if (array[l] > 9)
			array[l] = array[l] + 39;
		_putchar(array[l] + '0');
	}
	free(array);

	return (c);
}
