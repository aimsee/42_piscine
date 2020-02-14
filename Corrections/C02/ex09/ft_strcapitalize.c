#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] < '0' || str[i - 1] > '9') && (str[i - 1] < 'A' ||
		str[i - 1] > 'Z') && (str[i - 1] < 'a' || str[i - 1] > 'z'))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	printf("%s", ft_strcapitalize(argv[1]));
	return 0;
}