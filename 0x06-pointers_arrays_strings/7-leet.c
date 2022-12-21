#include<stdio.h>

/**
 * car - a function
 * @str1: parameter 1
 * @str2: parameter 2
 * @c: the character
 *
 * Return: char
 */

char car(char *str1, char *str2, char c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == str1[i])
			return (str2[i]);
	}
	return (c);
}

/**
 * leet - a function that encodes a string into 1337.
 * @str: parameter
 *
 * Return: str
 */

char	*leet(char *str)
{
	char alp1[] = "aAeEoOtTlL";
	char alp2[] = "4433007711";
	int i = 0;

	while (str[i])
	{
		str[i] = car(alp1, alp2, str[i]);
		i++;
	}
	return (str);
}
