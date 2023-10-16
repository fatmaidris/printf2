#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
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
	int* (*call)(va_list, int *);
} format_t;


int _printf(const char *format, ...);
int _putchar(char c);
int* print_char(va_list list, int *count);
int* print_string(va_list list, int *count);
int* print_percent(va_list list, int *count);
int print_dec(va_list list);
int print_int(va_list list);


#endif
