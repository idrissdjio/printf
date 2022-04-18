#include "main.h"

/**
 * print_pointer - prints a pointer address
 * @format: format to print the string (unused)
 * @args: va_list that contains a pointer
 * Return: number of characters printed
 */
int print_pointer(char *format, va_list args)
{
	void *pointer = va_arg(args, void *);
	unsigned char *byte;
	int i, digitValue, size = sizeof(void *), count = 0, lead_zero = 1;
	char *digits = "0123456789abcdef";
	(void)format;

	if (pointer == NULL)
	{
		count += _puts("(nil)");
		return (count);
	}
	byte = (unsigned char *)&pointer;
	count += _puts("0x");
	/* loops through each byte of a pointer*/
	for (i = size - 1; i >= 0; i--)
	{
		/* get the value of first half of the byte */
		digitValue = byte[i] / 16 % 16;
		/* print hex digit if it is not a leading zero */
		if (digitValue != 0 && lead_zero)
			lead_zero = 0;
		if (!lead_zero)
			count += _putchar(digits[digitValue]);

		/* get the value of second half of the byte */
		digitValue = byte[i] % 16;
		/* print hex digit if it is not a leading zero */
		if (digitValue != 0 && lead_zero)
			lead_zero = 0;
		if (!lead_zero)
			count += _putchar(digits[digitValue]);
	}
	return (count);
}
