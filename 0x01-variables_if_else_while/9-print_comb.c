#include <stdio.h>

/**
 * main - entry point
 * print all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char c = '0';

	while (c < '9')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar(c);
	putchar('\n');
	return (0);
}
