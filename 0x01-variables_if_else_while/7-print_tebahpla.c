#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints a positive, zero or negative number.
 *
 * Return: 0
 */

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
