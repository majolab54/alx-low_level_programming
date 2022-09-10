#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry
 * 
 * return 0
 */
int main(void)
{
	char low;
	for (low = 'a'; low <='z'; low++)
		punchar (low);
	printf("\n");
	return (0);
}
