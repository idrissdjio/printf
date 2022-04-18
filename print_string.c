#include "main.h"

/**
 * print_string - prints a string
 * @format: format to print string
 * @args: va_list that contains the character to print
 * Return: number of characters printed
 */
int print_string(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int count;
	(void)format;

	if (string == NULL)
		string = "(null)";
	count = _puts(string);
	return (count);
}
