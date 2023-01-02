#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: matrix
 *
 * Return: 1 or 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
