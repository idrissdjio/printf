#include <stdio.h>
#include "../main.h"

/**
 * main - tests _printf with c specifier
 * Return: Success(0), Error(1)
 */
int main(void)
{
	char c, *fmt, expectedStr[50], gotStr[50];
	int written1, written2;
	FILE *write_printf_file, *read_printf_file;

	/* Redirect writes to stdout to _printf.txt */
	write_printf_file = freopen("_printf.txt", "w", stdout);
	if (write_printf_file == NULL)
	{
		perror("freopen() _printf.txt");
		return (1);
	}

	c = 'a';
	fmt = "%c\n";
	written1 = sprintf(expectedStr, fmt, c);
	written2 = _printf(fmt, c);
	read_printf_file = fopen("_printf.txt", "r");
	if (read_printf_file == NULL)
	{
		perror("fopen() _printf.txt");
		return (1);
	}
	if (fgets(gotStr, 50, read_printf_file) == NULL)
	{
		perror("fgets() _printf.txt");
		return (1);
	}
	if (written1 != written2, strcmp(expectedStr, gotStr) != 0)
	{
		fprintf(stderr, "Error: %%c\\n\n");
		fprintf(stderr, "Expected: %s\n(%d characters long)\n", expectedStr, written1);
		fprintf(stderr, "Got: %s\n(%d characters long)\n", gotStr, written2);
		return (1);
	}
	return (0);
}
