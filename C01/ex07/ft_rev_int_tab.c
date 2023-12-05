
#include <stdio.h>

// We switch the first and last nummber (start and end)
// until we reach the ~middle of the string. Every time
// we switch the start and the end we increment the start
// and decrement the end. (until we reach the ~middle).
// -> (while (s <= e))
void ft_rev_int_tab(int *tab, int size)
{
	int s;
	int e;
	int tmp;

	s = 0;
	e = size - 1;
	tmp = 0;
	while (s <= e)
	{
		tmp = tab[s];
		tab[s] = tab[e];
		tab[e] = tmp;
		e--;
		s++;

	}
	
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
	int size = 10;
	int i = 0;

	while (i < size)
	{
		printf("\n");
		printf("tab[%i] = %i\n", i, tab[i]);
		i++;
	}
	printf("\n");
	size = 10;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("\n");
		printf("tab[%i] = %i\n", i, tab[i]);
		i++;
	}
}