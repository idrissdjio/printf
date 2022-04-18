#include "main.h"

/**
 * print_hexUpper - prints a hexadecimal
 * @format: format to print hexadecimal
 * @args: va_list that contains the hexadecimal to print
 * Return: number of digits printed
 */
int print_hexUpper(char *format, va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int i, j, remainder, count = 0;
	unsigned int number_copy = number;
	char *hexadecimal;
	(void)format;

	if (number == 0)
		return (_putchar('0'));
	while (number_copy != 0)
	{
		number_copy /= 16;
		count++;
	}
	hexadecimal = malloc(count);
	if (!hexadecimal)
		return (-1);
	for (i = 0; number != 0; i++)
	{
		remainder = number % 16;
		if (remainder < 10)
			hexadecimal[i] = remainder + '0';
		else
			hexadecimal[i] = remainder - 10 + 'A';
		number /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexadecimal[j]);
	free(hexadecimal);
	return (count);
}
