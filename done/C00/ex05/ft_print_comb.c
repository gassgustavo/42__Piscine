#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	N1;
	char	N2;
	char	N3;

	N1 = '0';
	while (N1 <= '7')
	{
		N2 = N1 + 1;
		while (N2 <= '8')
		{
			N3 = N2 + 1;
			while (N3 <= '9')
			{
				write (1, &N1, 1);
				write (1, &N2, 1);
				write (1, &N3, 1);
				if (N1 != '7')
					write (1, ", ", 2);
				N3++;
			}
			N2++;
		}
		N1++;
	}
}
