void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;
	
	i = 0;
	j = size / 2;
	while (i < j)
	{
		tmp = tab[i];
		tab[size] = tab[i];
		tab[size] = tmp;
		i++;
		size--; 
	}
}

int main()
{
	int *mytab;
	my_tab = [0, 1, 2, 3, 4];
	ft_rev_int_tab(my_tab, 5);
	return(0);
}