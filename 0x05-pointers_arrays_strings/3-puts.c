#include "main.h"
#include <stdio.h>

/**
 * _puts: prints content of a string to stdout
 * @str: holds address of the character string
 * Return: always 0
 */

void _puts(char *str)
{
	while  (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
