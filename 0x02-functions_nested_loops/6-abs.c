#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the value of an integer
 * @n: parameter of the function
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
