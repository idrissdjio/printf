#include "main.h"

/**
 * print_octal - prints an unsigned int as an octal number
 * @format: format to print the string
 * @args: va_list that contains an unsigned int to print
 * Return: number of characters printed
 */
int print_octal(char *format, va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	unsigned int number_copy = number;
	char *octal;
	int i, size = 0, count = 0;
	(void)format;

	if (number == 0)
		return (_putchar('0'));
	while (number_copy != 0)
	{
		size++;
		number_copy /= 8;
	}
	octal = malloc(size);
	if (!octal)
		return (-1);
	for (i = size - 1; i >= 0; i--)
	{
		octal[i] = number % 8 + '0';
		number /= 8;
	}
	for (i = 0; i < size && octal[i] == '0'; i++)
		;
	for (; i < size; i++)
	{
		_putchar(octal[i]);
		count++;
	}
	free(octal);
	return (count);
}
