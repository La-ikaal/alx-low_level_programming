#include "main.h"

/**
 * print_last_digit: prints the last digit of a number
 * @n: the number given to print_last_digit function
 * Return: returns the value of the last digit
 */

int print_last_digit(int c)
{
	int x;
	x = c % 10;

	if (c <  0)
	{
	x = c  * -1;
	}
	_putchar(x + '0');
	return (x);
}

