#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][1] || argv[3][1])
    	{
			ft_putchar(10);
      		return(0);
    	}
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar(10);
	return 0;
}