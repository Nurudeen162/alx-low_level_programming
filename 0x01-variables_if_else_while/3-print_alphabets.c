#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description 'A program that prints alphabet in upper and lower case'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low,'\n');
		putchar('\n');
	}

	return (0);
}

