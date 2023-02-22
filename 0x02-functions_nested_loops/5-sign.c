#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n : the number whose sign is printed by print_sign function
 * Return : returns 1 if n>zero, 0 if zero and -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(' ');
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{		
		return (-1);
	}
}
