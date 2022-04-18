#include "main.h"

/**
 * _print_number - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int _print_number(int number)
{
	unsigned int unsign;
	int count;

	count = count_digits(number);
	if (number < 0)
	{
		_putchar('-');
		unsign = -number;
	}
	else
		unsign = number;

	if (unsign >= 10)
		_print_number(unsign / 10);
	_putchar(unsign % 10 + '0');

	return (count);
}

/**
 * print_number - prints a number
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_number(char *format, va_list args)
{
	int number = va_arg(args, int);
	int count;
	(void)format;

	count = _print_number(number);

	return (count);
}
