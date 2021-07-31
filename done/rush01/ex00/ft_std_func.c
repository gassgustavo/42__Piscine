#include "ft_std.h"

int	check_signal(char signal)
{
	if (signal == '-')
	{
		return (-1);
	}
	else if (signal == '+')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	recursive_putnbr(long int nb)
{
	char	nb_char;

	if (nb > 9)
	{
		recursive_putnbr(nb / 10);
	}
	nb_char = nb % 10 + '0';
	ft_putchar(nb_char);
}
