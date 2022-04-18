#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 * @number: input number
 * Return: A positive value
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * count_digits - a function that counts the digits of a number.
 * @number: input integer
 * Return: digit count
 */
int count_digits(int number)
{
	int count = 0;
	int number_copy = number;

	if (number <= 0)
		count += 1;

	while (_abs(number_copy) != 0)
	{
		number_copy = number_copy / 10;
		count++;
	}
	return (count);
}
