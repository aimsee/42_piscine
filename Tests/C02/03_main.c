#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
  int n;
  int i;
  n = 1;
  i = 0;
  char *value_test[] = {"testforyou", "2020", "42", " ' -47A%madebyKork=("};
  int value_verified[] = {0, 1, 1, 0};
    while(n < 5)
   {
      printf("****** TEST N°%d ******\n", n);
      printf("Your result     : %d\n",ft_str_is_numeric(value_test[i]));
      printf("Expected result : %d\n\n", value_verified[i]);
      i++;
      n++;
    }
  return 0;
}
