#include <unistd.h>

void	ft_putnbr(int nbr);

void	ft_putchar(char x)
{
	write (1, &x, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write (1, "-214748364", 10);
		nbr = 8;
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return ;
}
