#include "board.h"

int		fill_row(int row, int *st_args);
int		fill_column(int column, int *st_args);
void	fill_center(void);

int	fill_board(void)
{
	int	st_args;

	st_args = 0;
	if (!fill_row(0, &st_args))
		return (0);
	if (!fill_row(get_board_size() - 1, &st_args))
		return (0);
	if (!fill_column(0, &st_args))
		return (0);
	if (!fill_column(get_board_size() - 1, &st_args))
		return (0);
	fill_center();
	return (1);
}

int	fill_row(int row, int *st_args)
{
	int	i;
	int	value;

	i = 1;
	while (i < get_board_size() - 1)
	{
		value = ft_atoi(get_args(*st_args));
		if (!value || value > (get_board_size() - 2))
			return (0);
		set_board(row, i, value);
		++*st_args;
		++i;
	}
	return (1);
}

int	fill_column(int column, int *st_args)
{
	int	i;
	int	value;

	i = 1;
	while (i < get_board_size() - 1)
	{
		value = ft_atoi(get_args(*st_args));
		if (!value || value > (get_board_size() - 2))
			return (0);
		set_board(i, column, value);
		++i;
		++*st_args;
	}
	return (1);
}

void	fill_center(void)
{
	int	row;
	int	column;
	int	max;

	row = 1;
	max = get_board_size() - 1;
	while (row < max)
	{
		column = 1;
		while (column < max)
		{
			set_board(row, column, 0);
			++column;
		}
		++row;
	}
}
