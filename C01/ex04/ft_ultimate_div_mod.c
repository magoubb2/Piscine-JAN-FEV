
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int main(void)
{
	int a = 10;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%i\n", a);
	printf("%i\n", b);
}