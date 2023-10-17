#include "main.h"
/**
  * print_X_ext - convert to HEX
  * @num: the value
  * Return: c
  */
int print_X_ext(unsigned int num)
{
	int l, c = 0;
	int *array;
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
			array[l] = array[l] + 7;
		_putchar(array[l] + '0');
	}
	free(array);

	return (c);
}
