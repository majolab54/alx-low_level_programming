#include "main.h"

/**
*main - check the code
*Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
