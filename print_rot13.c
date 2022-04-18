#include "main.h"

/**
 * print_rot13 - prints a number that is rot13'ed
 * @format: format to print number
 * @args: va_list that contains the number to print
 * Return: number of characters printed
 */
int print_rot13(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int i, count = 0;
	int char_i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	(void)format;

	for (i = 0; string[i] != '\0'; i++)
	{
		for (char_i = 0; input[char_i] != '\0'; char_i++)
		{
			if (string[i] == input[char_i])
			{
				_putchar(output[char_i]);
				break;
			}
		}
		if (input[char_i] == '\0')
			_putchar(string[i]);
		count++;
	}
	return (count);
}
