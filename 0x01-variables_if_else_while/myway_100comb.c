#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, e;

	for (d = '0'; d <= '9'; d++)
	{
		for (e = d ; e <= '9' ; e++)
		{
			if (e != d)
			{
			putchar(d);
			putchar(e);	
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}}}
	}
	putchar('\n');

	return (0);
}
