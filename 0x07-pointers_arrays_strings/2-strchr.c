#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: the chaine
 * @c: the char
 *
 * Return: 1 or 0
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c; ++s)
		;
	return (*s == c ? (char *) s : NULL);
}
