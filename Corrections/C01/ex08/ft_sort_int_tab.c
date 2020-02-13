#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	temp = 0;
	while (i < size)				// on reprends le swap et suit la logique de l'ex precedent en intervertissant 2 valeurs
	{								// tant que i < tab[size] on va verifier chaque adresse si la 1ere et >  a la seconde
		j = i + 1;					// si c'est le cas on la swap. Ensuite on sot de la boucle de swap pour avancer 
		while (j < size)			// d'une dadresse dans le tab[size]
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
	i++;
	}
	
}

int		main(void)
{
	int tab[] = {4, 3, 2, 1};
	int size;

	size = 4;
	printf("%d %d %d %d\n", tab[0], tab[1], tab[2],tab[3]);
	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d \n", tab[0], tab[1], tab[2],tab[3]);
	return (0);
}