#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i])
			WIP;
		if((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= 32;
		i++;
	}
  return(str);
  // tout mettre en caps -> puis minimize WIP
  // a finir ce soir
}

int main(int argc, char **argv)
{
	printf("%s", ft_strupcase(argv[1]));
	return 0;
}