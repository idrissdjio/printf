#include "main.h"

/**
 * _print_unsign - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int _print_unsign(unsigned int number)
{
	int count = 0;
	unsigned int number_copy = number;

	if (number == 0)
		count = 1;

	while (_abs(number_copy) != 0)
	{
		number_copy = number_copy / 10;
		count++;
	}

	if (number >= 10)
		_print_unsign(number / 10);
	_putchar (number % 10 + '0');

	return (count);
}

/**
 * print_unsign - prints an unsigned number
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_unsign(char *format, va_list args)
{
	unsigned int number = va_arg(args, int);
	int count;
	(void)format;

	count = _print_unsign(number);
	return (count);
}
