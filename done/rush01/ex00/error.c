#include "error.h"

static int	g_error = 0;

int	get_error(void)
{
	return (g_error);
}

void	set_error(int error_value)
{
	g_error = error_value;
}

void	show_error(void)
{
	const char		*msg_error[] = {"Nenhum erro encontrado.\n",
									"Erro NULL ponteir.\n",
									"Erro na chamada do main.\n",
									"Erro nao foi possivel solucionar.\n",
									"Erro desconhecido.\n"
									};
	const int		known_errors = KNOWN_ERR;

	if (g_error > known_errors)
		ft_print(msg_error[known_errors + 1]);
	else
		ft_print(msg_error[g_error]);
}
