#include "main.h"

/**
 * print_percent - prints '%'
 * @format: format (unused)
 * @args: va_list (unused)
 * Return: number of characters printed
 */
int print_percent(char *format, va_list args)
{
	(void)format;
	(void)args;
	_putchar('%');
	return (1);
}
