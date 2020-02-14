#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	int n;
	int i;

	n = 1;
  	i = 0;
	char *value_test_dest[] = {"test", "today", "correct", " ' -47A%fd  =("};
  	char test_dest[100];

  	while(n < 5)
 	 {
		printf("****** TEST N°%d ******\n", n);
 		printf("Your result : %s\n",ft_strcpy(test_dest, value_test_dest[i]));
 		printf("Expected result : %s\n\n",strcpy(test_dest, value_test_dest[i]));
    	i++;
    	n++;
  	}
	return 0;
}
