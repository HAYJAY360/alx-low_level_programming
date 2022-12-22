#include "main.h"

/**
 * string_toupper - a function that changes lowercase letter to uppercase
 * @str: parameter
 *
 * Return: str
 */

char	*string_toupper(char *str)
{
	int	i;

	i = 0
	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}
