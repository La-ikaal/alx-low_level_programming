#include "main.h"
#include <stdio.h>

/**
 * swap_int -swaps value of two integers
 * @a: holds value of the first integer to be swapped
 * @b: holds value of second integer to be swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
