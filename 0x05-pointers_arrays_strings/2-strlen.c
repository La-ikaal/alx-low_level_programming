#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns length of a string
 * @s -pointer to the memory location of the string
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
