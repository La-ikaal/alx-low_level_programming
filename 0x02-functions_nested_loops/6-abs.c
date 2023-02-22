#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n : integer passed to _abs function
 * Return : returns integer value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int r;
		r = n * -1;
		return (r);
	}
	else
	{
		return (n);
	}
}
