#include "main.h"

/**
 * print_sign - This command checks for a sign
 * @n: int for argument of the function
 * Return: 0
 */

int print_sign(int c)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{ _putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
