#include "main.h"

/**
* _putchar - write the character c
* @c: the character to print
*
* Return: when success 1.
* when error return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
