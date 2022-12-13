#include <stdio.h>

/**
 * main - this program prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = n1 + n2;
		printf("%lu, sum);

		n1 = n2;
		n2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
