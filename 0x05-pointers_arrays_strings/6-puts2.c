#include <stdio.h>
#include "main.h"

/**
*puts2 - printsevery other character
*@str: string
*
*REturn: nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
