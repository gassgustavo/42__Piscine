#include "board.h"
#include "validator.h"
#include "solver.h"

int	main(int argc, char *argv[])
{
	int	board_size;

	board_size = valid_board_size(argc, argv);
	create_board(board_size);
	if (get_error())
	{
		ft_print("Error\n");
		return (0);
	}
	if (!solve_board(1, 1))
		set_error(3);
	if (get_error())
		ft_print("Error\n");
	else
		show_board();
	return (0);
}
