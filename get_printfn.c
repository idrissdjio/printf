#include "main.h"

/**
 * get_print_fn - selects a print function according to specifier
 * @format: string that contains the specifier
 * Return: pointer to the print function
 */
int (*get_print_fn(char *format))(char *format, va_list)
{
	int i;

	print_fn getfn[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{"%d", print_number},
		{"%i", print_number},
		{"%b", print_binary},
		{"%u", print_unsign},
		{"%o", print_octal},
		{"%x", print_hexlower},
		{"%X", print_hexUpper},
		{"%S", print_unprintable},
		{"%p", print_pointer},
		{"%r", print_reverse},
		{"%R", print_rot13},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; getfn[i].specifier; i++)
	{
		if (format[1] == getfn[i].specifier[1])
			return (getfn[i].fn);
	}
	return (NULL);
}
