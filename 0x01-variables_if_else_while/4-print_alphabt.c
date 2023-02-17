#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char e='e';
	char q='q';

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != e && letter != q)
		putchar(letter);
	putchar('\n');
	return (0);
}
