#include <stdio.h>

/**
 * main - entry point
 * print the alphabet in lowercase a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
        char c2 = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c2 <= 'Z')
	{
	        putchar(c2);
                c2++;
	}
	putchar('\n');
	return (0);
}
