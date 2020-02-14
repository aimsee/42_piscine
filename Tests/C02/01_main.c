#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	int n;
	int i;
	n = 1;
  i = 0;
	char *value_test_dest[] = {"testforyou", "todayisnottommorow", "correctistrue", " ' -47A%madebyKork=("};
  char test_dest[100];

  	while(n < 5)
 	 {
      int count = rand()%15;
		  printf("****** TEST N°%d ******\n", n);
 		  printf("Your result     : %s\n",ft_strncpy(test_dest, value_test_dest[i], count));
 		  printf("Expected result : %s\n\n",strncpy(test_dest, value_test_dest[i], count));
    	i++;
    	n++;
  	}
	return 0;
}
