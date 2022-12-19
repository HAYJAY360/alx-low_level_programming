#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints n elements of an array of intergers
 * @a: this represents the array of integers
 * @n: this represents the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
