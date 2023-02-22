#include "main.h"

/**
 * _isalpha : checkif the number is an alphabet
 *
 * Return: eturns 1 if alphabet and 0 if not alphabet
 *
 * @c : the number passed to _isalpha function
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <=  90))
	{
		_putchar(c + '0');
		return (1);
	}
	else
	{
		_putchar(c + '0');
		return (0);
	}
}
