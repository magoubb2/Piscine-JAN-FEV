
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 9;
	int b = 5;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("%i\n", div);
	printf("%i\n", mod);
}