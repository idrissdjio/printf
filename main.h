#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct print_method - structure containing specifier
 * and corresponding print functions.
 * @specifier: the location and method to translate data to characters.
 * @fn: print function for specific type.
 */
typedef struct print_method
{
	char *specifier;
	int (*fn)(char *format, va_list);
} print_fn;

int _abs(int number);
int _putchar(char character);
int _puts(char *string);
int count_digits(int number);
int print_char(char *format, va_list);
int print_string(char *format, va_list);
int print_percent(char *format, va_list);
int _print_number(int number);
int print_number(char *format, va_list);
int print_binary(char *format, va_list);
int print_octal(char *format, va_list);
int print_hexlower(char *format, va_list);
int print_hexUpper(char *format, va_list);
int _print_unsign(unsigned int number);
int print_unsign(char *format, va_list);
int print_unprintable(char *format, va_list);
int print_pointer(char *format, va_list);
int print_reverse(char *format, va_list);
int _print_rot13(char *string);
int print_rot13(char *format, va_list);

int (*get_print_fn(char *format))(char *format, va_list);
int _printf(char *format, ...);

#endif
