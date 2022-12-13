#include "main.h"

/**
 * _islower - This program checks for lowercase alphabets
 * @c: this is the parameter
 * Return: 1 (Succes)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
