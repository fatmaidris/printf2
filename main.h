#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - structure for specifires (special) and
 * functio pointer to call the helper functions.
 * @special: format character
 * @call: func ptr
*/

typedef struct format
{
	char special;
	void (*call)(va_list, int *);
} format_t;


int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list list, int *count);
void print_string(va_list list, int *count);
void print_percent(va_list list, int *count);

#endif
