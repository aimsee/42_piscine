#include <stdio.h>
#include <unistd.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

void ft_putchar(char c);

int main()
{
	int n = 1;
	int i = 0;
	char *value_test = "c0#²";

	while(n < 5)
	{
		int expected = putchar(value_test[i]);
		printf("****** TEST N°%d ******\n", n);
    	printf("Your result : %p\n", ft_putchar(value_test[i]));
		printf("Expected result : %c\n", expected);
		if(ft_putchar(value_test[i]) == expected)
			printf(ANSI_COLOR_GREEN   "      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		else
			printf(ANSI_COLOR_RED	"      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		i++;
		n++;
	}
	return 0;
}
