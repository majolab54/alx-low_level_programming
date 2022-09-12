#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
char main(void)
{
	const char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar("%c"low);
		putchar("\n");
	}
	return (0);
}
