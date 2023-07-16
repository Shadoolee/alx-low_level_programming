#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * and followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a'; lt--)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
