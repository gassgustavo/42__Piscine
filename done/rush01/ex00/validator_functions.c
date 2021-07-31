#include "validator.h"

int	row_forward_right(int row);
int	row_back_right(int row);
int	col_forward_right(int col);
int	col_back_right(int col);

int	number_is_in_row(int row, int number)
{
	int	range_max;
	int	i;

	i = 1;
	range_max = get_board_size() - 1;
	while (i < range_max)
	{
		if (get_board(row, i) == number)
			return (1);
		++i;
	}
	return (0);
}

int	number_is_in_column(int col, int number)
{
	int	range_max;
	int	i;

	i = 1;
	range_max = get_board_size() - 1;
	while (i < range_max)
	{
		if (get_board(i, col) == number)
			return (1);
		++i;
	}
	return (0);
}

int	check_argv(char *argv[])
{
	int	itens_argv;

	itens_argv = cont_itens_in_args(argv);
	if (itens_argv % 4 || !itens_argv)
	{
		set_error(2);
		return (0);
	}
	return (itens_argv / 4);
}

int	is_row_right(int row)
{
	return (row_forward_right(row) && row_back_right(row));
}

int	is_column_right(int col)
{
	return (col_forward_right(col) && col_back_right(col));
}
