#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

char	*ft_strcpy(char *dest, char *src);

int main()
{
	int n = 1;
	int i = 0;
	char *value_test_dest[] = {"test", "today", "correct", " ' -47A%fd  =("};
	char *value_verified[] = {"test", "today", "correct", " ' -47A%fd  =("};

	while(n < 5)
	{
		char your_str[100];
		char *expected = value_verified[i];
		printf("****** TEST N°%d ******\n", n);
		printf("Your result     : %s\n",ft_strcpy(your_str, value_test_dest[i]));
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
