#include <unistd.h>

void aff_first_param(char *str)
{
	while(*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
  write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc < 2)
		write(1, "\n", 1);
	else
		aff_first_param(argv[1]);  
	return 0;