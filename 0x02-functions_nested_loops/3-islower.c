#include "main.h"

/**
 *_islower - check the code.for lowercase characters
 *
 * Return: if c is lowercase it returns 0 or 1
 *
 * @c : Number to pass to _islower function
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);

}
