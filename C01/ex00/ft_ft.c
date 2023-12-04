
#include <stdio.h>

void ft_ft(int *nbr)
{
	int i;

	i = 0;
	nbr[i] = 42;
}

int main(void)
{
	int nbr = 5;

	ft_ft(&nbr);
	printf("%i\n", nbr);
}