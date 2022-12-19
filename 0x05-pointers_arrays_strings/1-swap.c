#include "main.h"

/**
 * swap_int -this is  a function that swaps values of integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
