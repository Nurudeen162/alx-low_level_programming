#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - 'A program that prints all single digit of base10'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
