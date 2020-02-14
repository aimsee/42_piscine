#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

int ft_strlen(char *str);

int main()
{
	int n;
	int i;
	n = 1;

	char *value_test[] = {"test", "hello", "forty-two", "Korkrane"};

	while(n < 5)
	{	
		int your = ft_strlen(value_test[i]);
		int expected = strlen(value_test[i]);
		printf("****** TEST N°%d ******\n", n);
    	printf("Your result : %d\n", ft_strlen(value_test[i]));
		printf("Expected result : %ld\n", strlen(value_test[i]));
		if(your == expected)
			printf(ANSI_COLOR_GREEN   "      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		else
			printf(ANSI_COLOR_RED	"      [WRONG]\n"   ANSI_COLOR_RESET "\n");
		i++;
		n++;
	}
	return 0;
}
