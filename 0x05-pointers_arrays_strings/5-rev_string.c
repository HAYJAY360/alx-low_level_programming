#include <stdio.h>
/**
 * rev_string - this function reverses a string
 * @s: this is the string to be reversed
 * Return: Always 0
 */

void rev_string(char *s)
{
	int c, revs;
	char character;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	revs = 0;
	for (c = c - 1; revs < c; revs++)
	{
		character = s[c];
		s[c] = s[revs];
		s[revs] = character;
		c--;
	}
}
