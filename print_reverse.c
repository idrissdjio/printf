#include "main.h"

/**
 * print_reverse - prints a string
 * @format: format to print string
 * @args: va_list that contains the character to print
 * Return: number of characters printed
 */
int print_reverse(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int i, count = 0, length = 0;
	(void)format;

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		length++;
		count++;
	}
	for (i = length - 1; i >= 0; i--)
		_putchar(string[i]);

	return (count);
}
