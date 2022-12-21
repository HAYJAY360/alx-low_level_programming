#include<stdio.h>

/**
 * upper - a function that changes cases of letters
 * @c: the character
 *
 * Return: 1 or 0.
 */

char	upper(char b)
{
	char	bat;

	if (b >= 'a' && b <= 'z')
		bat = b + 'A' - 'a';
	else
		bat = b;
	return (bat);
}

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
