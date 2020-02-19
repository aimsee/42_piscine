#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	int n = 1;
	int i = 0;
	int count = rand()%50;
	char *value_s1[] = {"testforyou", "todayisnottommorow", "correctistrue", " ' -47AmadebyKork=("};
	char *value_s2[] = {"aestforyou", "todayisnotommouow", "covrectistrue", " ' -47AmadebyKork0("};
	while(n < 5)
	{
		int expected = strncmp(value_s1[i], value_s2[i], count);
		int your = ft_strncmp(value_s1[i], value_s2[i], count);
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
