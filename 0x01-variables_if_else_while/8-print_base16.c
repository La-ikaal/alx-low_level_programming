#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char i;

	for (num =  0; num < 10 ; num++)
		putchar(num + '0');
	for (i = 'a' ; i <= 'f' ; i++)	
		putchar(i);
	putchar('\n');
	return (0);
}
