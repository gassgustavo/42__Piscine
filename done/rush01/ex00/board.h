#ifndef BOARD_H
# define BOARD_H
# include <stdlib.h>
# include "argv_functions.h"
# include "error.h"
# include "ft_std.h"
# include "validator.h"

int		get_board_size(void);
int		get_board(int row, int column);
void	set_board(int row, int column, int value);
void	create_board(int size);
void	show_board(void);

#endif