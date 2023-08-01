#include "main.h"
#include <stdio.h>


/**
 * print_chessboard - Prints the chessboard.
 * @board: The 2D array representing the chessboard.
 *
 * Return: None (void function).
 */
void print_chessboard(char (*board)[8])
{
	int i, j;

	if (board == NULL)
		return;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(board[i][j]);
		}
		putchar('\n');
	}
}

