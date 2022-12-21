#include<stdio.h>

/**
 * upper - a function that changes cases of letters
 * @c: the character
 *
 * Return: 1 or 0.
 */

char	upper(char c)
{
	char	car;

	if (c >= 'a' && c <= 'z')
		car = c + 'A' - 'a';
	else
		car = c;
	return (cat);
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
