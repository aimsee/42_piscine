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
