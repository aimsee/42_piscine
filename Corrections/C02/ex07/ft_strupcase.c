#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
  return(str);
}

int main(int argc, char **argv)
{
	printf("%s", ft_strupcase(argv[1]));
	return 0;
}