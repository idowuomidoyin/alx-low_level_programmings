#include <stdio.h>
/**
 * main - print the alphabets in reverse
 * Return: aAlways 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
