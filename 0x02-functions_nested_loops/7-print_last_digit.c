#include "main.h"

/**
 * print_last_digit - function that prints last digit
 * @n: takes in an integer
 * Return: results output
 */
int print_last_digit(int)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
