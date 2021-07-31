#include "validator.h"

int	row_forward_right(int row)
{
	int	range_max;
	int	max_value;
	int	i;
	int	view;

	view = 0;
	max_value = 0;
	i = 1;
	range_max = get_board_size() - 1;
	while (i < range_max)
	{
		if (get_board(row, i) > max_value)
		{
			++view;
			max_value = get_board(row, i);
		}
		++i;
	}
	if (get_board(row, 0) == view)
		return (1);
	else
		return (0);
}

int	row_back_right(int row)
{
	int	range_max;
	int	max_value;
	int	i;
	int	view;

	view = 0;
	max_value = 0;
	i = get_board_size() - 2;
	range_max = 1;
	while (i >= range_max)
	{
		if (get_board(row, i) > max_value)
		{
			++view;
			max_value = get_board(row, i);
		}
		--i;
	}
	if (get_board(row, get_board_size() - 1) == view)
		return (1);
	else
		return (0);
}

int	col_forward_right(int col)
{
	int	range_max;
	int	max_value;
	int	i;
	int	view;

	view = 0;
	max_value = 0;
	i = 1;
	range_max = get_board_size() - 1;
	while (i < range_max)
	{
		if (get_board(i, col) > max_value)
		{
			++view;
			max_value = get_board(i, col);
		}
		++i;
	}
	if (get_board(0, col) == view)
		return (1);
	else
		return (0);
}

int	col_back_right(int col)
{
	int	range_max;
	int	max_value;
	int	i;
	int	view;

	view = 0;
	max_value = 0;
	i = get_board_size() - 2;
	range_max = 1;
	while (i >= range_max)
	{
		if (get_board(i, col) > max_value)
		{
			++view;
			max_value = get_board(i, col);
		}
		--i;
	}
	if (get_board(get_board_size() - 1, col) == view)
		return (1);
	else
		return (0);
}
