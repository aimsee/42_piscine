#include <stdio.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

void ft_putchar(char c);

int main()
{
	int n;
	int i;
	n = 1;
	i = 0;
	char *value_test = "c0#²";

	while(n < 5)
	{
		printf("****** TEST N°%d ******\n", n);
    	ft_putchar(value_test[i]);
    	printf("\n");
		printf("Expected result : %c\n", value_test[i]);
		//if(your == expected)
			//printf(ANSI_COLOR_GREEN   "      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		//else
		//	printf(ANSI_COLOR_RED	"      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
		i++;
		n++;
	}
	return 0;
}
