#include "main.h"

/**
 * _isalpha : check for alphabetic character
 *@c : the number passed to _isalpha function
 * Return: returns 1 if alphabet and 0 if not alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <=  90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
