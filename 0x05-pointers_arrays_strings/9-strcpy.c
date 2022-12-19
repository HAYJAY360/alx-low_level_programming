#include "main.h"
#include<stdio.h>
/**
 * _strcpy - This function copies strings
 * @dest: a parameter
 * @src: a parameter
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; x < a ; x++)
	{
		dest[x] = src[x];
	}
	dest[a] = '\0';
	return (dest);
}
