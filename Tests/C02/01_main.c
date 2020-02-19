#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
  int n = 1;
  int i = 0;
	char *value_test_dest[] = {"testforyou", "todayisnottommorow", "correctistrue", " ' -47AmadebyKork=("};
  int count = rand()%8;
  	while(n < 5)
 	 {
      char your_str[100];
      char test_dest[100]; 
      char *expected = strncpy(test_dest, value_test_dest[i], count);
		  printf("****** TEST N°%d ******\n", n);
 		  printf("Your result     : %s\n",ft_strncpy(your_str, value_test_dest[i], count));
 		  printf("Expected result : %s\n",expected);
    	if(*your_str == *expected)
        printf(ANSI_COLOR_GREEN   "      [CORRECT]\n"   ANSI_COLOR_RESET "\n");
      else
        printf(ANSI_COLOR_RED "      [WRONG]\n"   ANSI_COLOR_RESET "\n");
      i++;
    	n++;
  	}
	return 0;
}
