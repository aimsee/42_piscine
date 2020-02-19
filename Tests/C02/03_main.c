#include <stdio.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

int ft_str_is_numeric(char *str);

int main()
{
	int n = 1;
	int i = 0;
	char *value_test[] = {"testforyou", "2020", "42", " ' -47A%madebyKork=("};
	int value_verified[] = {0, 1, 1, 0};
	while(n < 5)
	{
		int your = ft_str_is_numeric(value_test[i]);
		int expected = value_verified[i];
		printf("****** TEST N°%d ******\n", n);
		printf("Your result     : %d\n",your);
		printf("Expected result : %d\n", expected);
		if(your == expected)
			printf(ANSI_COLOR_GREEN   "      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		else
			printf(ANSI_COLOR_RED "      [WRONG]\n"   ANSI_COLOR_RESET "\n");
		i++;
		n++;
	}
	return 0;
}
