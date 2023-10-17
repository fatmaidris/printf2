#include "main.h"

/**
  * print_x_ext - convert hex
  * @num: the value
  * Return: c
  */

int print_x_ext(unsigned long int num)
{
	long int l, c = 0;
	long int *array;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
	num = num / 16;
	c++;
	}
	c++;
	array = malloc(sizeof(long int) * c);

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
