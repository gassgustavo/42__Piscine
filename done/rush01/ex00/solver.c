#include "solver.h"

int	number_right(int row, int col, int number);

int	solve_board(int row, int col)
{
	int	range_max;
	int	number;

	range_max = get_board_size() - 1;
	if (col == range_max)
	{
		col = 1;
		if (row == range_max - 1)
			return (1);
		else
			++row;
	}
	number = 1;
	while (number < range_max)
	{
		if (number_right(row, col, number))
			return (1);
		++number;
	}
	return (0);
}

int	number_right(int row, int col, int number)
{
	if (number_isvalid(row, col, number))
	{
		set_board(row, col, number);
		if (is_on_rules(row, col))
		{
			if (solve_board(row, col + 1))
				return (1);
		}
		set_board(row, col, 0);
	}
	return (0);
}
