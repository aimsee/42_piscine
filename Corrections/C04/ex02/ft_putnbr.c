#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int div;
	int mod;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
			write(1, "2147483648", 10);
		nb *= (-1);
	}
	if (nb >= 0)
	{
		div = nb / 10;
		mod = nb % 10;
		if (div)
			ft_putnbr(div);
		ft_putchar(mod + 48);
	}
}
