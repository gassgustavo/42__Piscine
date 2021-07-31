#include "board.h"

static int	**g_board;
static int	g_size = 0;

int	fill_board(void);

int	get_board_size(void)
{
	return (g_size);
}

int	get_board(int row, int column)
{
	return (g_board[row][column]);
}

void	set_board(int row, int column, int value)
{
	g_board[row][column] = value;
}

void	create_board(int size)
{
	int	i;

	if (!size)
		return ;
	g_size = size + 2;
	i = 0;
	g_board = (int **) malloc(sizeof(int *) * g_size);
	if (!check_ponteir(g_board))
		return ;
	while (i < g_size)
	{
		g_board[i] = (int *) malloc(sizeof(int) * g_size);
		if (!check_ponteir(g_board[i]))
			return ;
		++i;
	}
	if (!fill_board())
	{
		set_error(2);
		return ;
	}
}

void	show_board(void)
{
	int	row;
	int	column;

	row = 1;
	while (row < g_size - 1)
	{
		column = 1;
		while (column < g_size - 1)
		{
			ft_putnbr(get_board(row, column));
			if (column != g_size - 2)
				ft_putchar(' ');
			++column;
		}
		ft_putchar('\n');
		++row;
	}
}
