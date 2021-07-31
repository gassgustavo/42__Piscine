#ifndef VALIDATOR_H
# define VALIDATOR_H
# include "argv_functions.h"
# include "error.h"
# include "board.h"

int	valid_board_size(int argc, char *argv[]);
int	check_ponteir(void *ponteir);
int	number_isvalid(int row, int col, int number);
int	is_on_rules(int row, int col);

#endif