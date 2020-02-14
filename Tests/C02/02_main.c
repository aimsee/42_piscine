#include <stdio.h>

int main()
{
  int n;
  int i;
  n = 1;
  i = 0;
  char *value_test[] = {"testforyou", "today42", "correct", " ' -47A%madebyKork=("};
  int value_verified[] = {1, 0, 1, 0};
    while(n < 5)
   {
      printf("****** TEST N°%d ******\n", n);
      printf("Your result     : %d\n",ft_str_is_alpha(value_test[i]));
      printf("Expected result : %d\n\n", value_verified[i]);
      i++;
      n++;
    }
  return 0;
}
