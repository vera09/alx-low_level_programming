#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 * @n: A number passed to retrieve the last number from
 *
 * Return: Last digit of the passed number
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}

