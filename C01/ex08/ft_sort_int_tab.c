
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int idx;

	idx = 0;
	while (idx < (size - 1))
	{
		if (tab[idx] > tab[idx + 1])
		{
			tmp = tab[idx];
			tab[idx] = tab[idx + 1];
			tab[idx + 1] = tmp;
			idx = 0;
		}
		idx++;
	}
}

int main(void)
{
	int tab[] = {1, 4, 3, 2, 5};
	int size = 5;
	int i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("\n");
		printf("tab[%i] = %i\n", i, tab[i]);
		i++;
	}

}