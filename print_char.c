#include "main.h"

/**
 * print_char - prints a character
 * @format: format to print string
 * @args: va_list that contains the character to print
 * Return: number of characters printed
 */
int print_char(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}
