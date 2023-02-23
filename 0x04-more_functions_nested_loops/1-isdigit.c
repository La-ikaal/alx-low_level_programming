#include "main.h"
#include <stdio.h>

/**
 * _isdigit:checks for a digit
 * @n: number checked by _isdigit function
 * Return : returns 1 if digit 0 if anything else
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

