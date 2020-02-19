#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

char  *ft_strlowcase(char *str);

int main()
{
	int n = 1;
	int i = 0;
	char *value_test[] = {"TESTforYOU", "BoRn2CoDe", "PUSH&pull", " ' -47A%MADEbyKork=("};
	char *value_verified[] = {"testforyou", "born2code", "push&pull", " ' -47a%madebykork=("};
	while(n < 5)
	{
		char your_str[100];
		strcpy(your_str, value_test[i]);
		char *expected = value_verified[i];
		printf("****** TEST N°%d ******\n", n);
		printf("Your result     : %s\n", ft_strlowcase(your_str));
		printf("Expected result : %s\n", expected);
		if(*your_str == *expected)
			printf(ANSI_COLOR_GREEN   "      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		else
			printf(ANSI_COLOR_RED "      [WRONG]\n"   ANSI_COLOR_RESET "\n");
		i++;
		n++;
	}
	return 0;
}
