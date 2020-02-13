#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main(int argc, char **argv)
{
	int a = 4;
	printf("%s",ft_strncpy(argv[1], argv[2], a));
	return 0;
}