#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase  character
 * @c: the character to be checked by _isupper function
 * Return: returns 1 if upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >=65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
