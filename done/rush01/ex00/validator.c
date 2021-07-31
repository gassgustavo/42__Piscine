#include "validator.h"

int	check_argv(char *argv[]);
int	number_is_in_row(int row, int number);
int	number_is_in_column(int col, int number);
int	is_row_right(int row);
int	is_column_right(int col);

int	valid_board_size(int argc, char *argv[])
{
	if (argc != 2)
	{
		set_error(2);
		return (0);
	}
	return (check_argv(argv));
}

/*
 * return 0 if ponteir is null.
 */
int	check_ponteir(void *ponteir)
{
	if (!ponteir)
	{
		set_error(1);
		return (0);
	}
	return (1);
}

int	number_isvalid(int row, int col, int number)
{
	return (!number_is_in_row(row, number)
		&& !number_is_in_column(col, number));
}

int	is_on_rules(int row, int col)
{
	if (!number_is_in_row(row, 0))
	{
		if (!is_row_right(row))
			return (0);
	}
	else if (!number_is_in_column(col, 0))
	{
		if (!is_column_right(col))
			return (0);
	}
	return (1);
}
