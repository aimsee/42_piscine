#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void aff_a(char *str)
{
	while(*str != '\0')
	{
		if(*str == 'a')
		{
			ft_putchar('a');
			break;
		}
		str++;
	}
}
int main(int argc, char **argv)
{
	int i;
	i = 0;
	if(argc == 2)
	{
		aff_a(argv[1]);	
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return 0;
}