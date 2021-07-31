#include "ft_std.h"

int		check_signal(char signal);
void	recursive_putnbr(long int nb);

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void	ft_print(const char *str)
{
	char	*p;

	p = (char *) str;
	while (*p)
	{
		ft_putchar(*p);
		++p;
	}
}

int	ft_atoi(char *str)
{
	char	*p;
	int		value;
	int		base;
	int		signal;

	value = 0;
	base = 1;
	signal = check_signal(*str);
	if (signal)
		++str;
	p = str;
	while (*p != '\0' && (*p >= '0' && *p <= '9'))
		++p;
	--p;
	while (p >= str)
	{
		value = value + base * (*p - '0');
		base = base * 10;
		--p;
	}
	if (signal)
		return (value * signal);
	return (value);
}

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", sizeof(char));
		number = number * -1;
	}
	recursive_putnbr(number);
}
