#include<stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: a character
 *
 * Return: 1 or 0
 */

char  *_strdup(char *str)
{
	char *src;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	src = malloc((len + 1) * sizeof(char));
	if (src != NULL)
	{
		while (str[i])
		{
			src[i] = str[i];
			i++;
		}
		src[i] = '\0';
	}
	return (src);
}
