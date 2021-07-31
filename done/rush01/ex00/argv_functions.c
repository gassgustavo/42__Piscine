#include "argv_functions.h"

static char	**g_args = 0;

void	parse_argv(char *argv[]);
int		find_itens_value(char *str);
void	build_args(char *str);
void	replace_space(char **rabbit);

int	cont_itens_in_args(char *argv[])
{
	if (!g_args)
		parse_argv(argv);
	return (find_itens_value(*(argv + 1)));
}

void	parse_argv(char *argv[])
{
	int		itens;
	char	*p;

	p = *(argv + 1);
	while (*p && *p == ' ')
		++p;
	itens = find_itens_value(p);
	g_args = (char **) malloc(sizeof(char *) * (itens + 1));
	build_args(p);
}

int	find_itens_value(char *str)
{
	char		*rabbit;
	static int	i = 0;

	if (i)
		return (i);
	rabbit = str;
	while (*rabbit)
	{
		if (*rabbit == ' ')
		{
			while (*rabbit && *rabbit == ' ')
				++rabbit;
			--rabbit;
		}
		else
		{
			while (*rabbit && *rabbit != ' ')
				++rabbit;
			--rabbit;
			++i;
		}
		++rabbit;
	}
	return (i);
}

void	build_args(char *str)
{
	char	*rabbit;
	char	*turtle;
	int		i;

	rabbit = str;
	i = 0;
	while (*rabbit)
	{
		if (*rabbit == ' ')
		{
			replace_space(&rabbit);
		}
		else
		{
			turtle = rabbit;
			g_args[i] = turtle;
			while (*rabbit && *rabbit != ' ')
				++rabbit;
			--rabbit;
			++i;
		}
		++rabbit;
	}
	g_args[i] = 0;
}

char	*get_args(int st)
{
	return (g_args[st]);
}
