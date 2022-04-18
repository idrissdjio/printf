#include "main.h"

/**
 * print_unprintable - prints ascii hex values of non printable characters
 * @format: format to print string
 * @args: va_list that contains the string to print
 * Return: number of characters printed
 */
int print_unprintable(char *format, va_list args)
{
	char *string = va_arg(args, char *), hex[3], digit;
	int count = 0;
	(void)format;

	if (string == NULL)
		string = "(null)";
	hex[2] = '\0';
	while (*string)
	{
		if (*string < 32 || *string >= 127)
		{
			count += _puts("\\x");
			digit = *string % 16;
			if (digit >= 10)
				hex[1] = digit - 10 + 'A';
			else
				hex[1] = digit + '0';

			digit = *string / 16 % 16;
			if (digit >= 10)
				hex[0] = digit - 10 + 'A';
			else
				hex[0] = digit + '0';
			count += _puts(hex);
		}
		else
			count += _putchar(*string);
		string++;
	}
	return (count);
}
