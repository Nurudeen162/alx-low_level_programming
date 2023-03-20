#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * descrption -'A program that prints lowercase alphabet in reverse'
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
