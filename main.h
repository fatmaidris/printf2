#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - structure for specifires (id) and
 * function pointer to call the helper functions.
 * @id: format character
 * @w: func ptr
*/

typedef struct format
{
	char *id;
	int (*w)();
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int printf_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list val);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_x(va_list val);
int print_X(va_list val);
int print_X_ext(unsigned int num);
int print_str(va_list val);
int print_x_ext(unsigned long int num);
int print_pointers(va_list val);
int print_rev(va_list val);
int print_rot(va_list val);


#endif
