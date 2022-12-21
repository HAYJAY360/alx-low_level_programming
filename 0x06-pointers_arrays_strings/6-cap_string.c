#include<stdio.h>

/**
 * upper - a function that changes case of letters
 * @c: the character
 *
 * Return: 1 or 0
 */

char	upper(char c)
{
	char	car;

	if (c >= 'a' && c <= 'z')
		car = c + 'A' - 'a';
	else
		car = c;
	return (car);
}

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: parameter
 *
 * Return: str
 */

char	*cap_string(char *str)
{
	int	i;



	i = 0;
	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}
