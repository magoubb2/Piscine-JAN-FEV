
#include <stdio.h>

// Stok the value of *a in tmp so that when we wnt to get the mod
// the value of '*a' doesn' change.

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}

int main(void)
{
	int a = 10;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%i\n", a);
	printf("%i\n", b);
}