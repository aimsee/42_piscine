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

int main()
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if((i % 3 == 0) && (i % 5 == 0))
			write(1, "FizzBuzz", 8);
		else if(i % 3 == 0)
			write(1, "Fizz", 4);
		else if(i % 5 == 0)
			write(1, "Buzz", 4);
		else
			ft_putnbr(i);
	}
	return 0;
}