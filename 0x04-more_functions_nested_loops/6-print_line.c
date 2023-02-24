#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  * @x: counter 
  * Return: empty
  */
void print_line(int n)
{
	char c = '_';
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n ; x++)
			_putchar(c);
	 _putchar('\n');
	}
}
