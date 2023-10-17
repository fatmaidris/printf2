#include "main.h"

/**
* _strlen - return the length of strings
* @str: the string pointer
* Return: l
*/

int _strlen(char *str)
{
	int l;

	for (l = 0; str[l] != 0; l++)
		;
	return (l);
}

/**
* _strlenc - strlen function but applied for contant char str pointer
* @str: char pointer
* Return: l
*/

int _strlenc(const char *str)
{
	int l;

	for (l = 0; str[l] != 0; l++)
		;
	return (l);
}
