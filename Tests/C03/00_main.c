#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

int	ft_strcmp(char *s1, char *s2);

int main()
{
	int n = 1;
	int i = 0;
	char *value_s1[] = {"tesi", "tocay", "corrmct", " ' -47A%fZ  =("};
	char *value_s2[] = {"test", "today", "correct", " ' -47A%fd  =("};
	while(n < 5)
	{
		int expected = strcmp(value_s1[i], value_s2[i]);
		int your = ft_strcmp(value_s1[i], value_s2[i]);
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
