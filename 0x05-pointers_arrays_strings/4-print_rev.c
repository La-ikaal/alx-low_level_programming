#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * s: holds the address of the string
 * Return : always 0
 */

void print_rev(char *s)
{       
	int i = 0;;

	while (*s != '\0')
	{
		putchar(*s);
		s++;

	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');

}

