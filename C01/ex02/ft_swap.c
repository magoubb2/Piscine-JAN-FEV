
#include <stdio.h>

void ft_swap(int *v_a, int *v_b)
{
    int tmp = 0;

    printf("tmp avant = %i\n", tmp);
	printf("\n");
    printf("v_a avant = %d\n", *v_a);
	printf("\n");
    printf("v_b avant = %d\n", *v_b);
	printf("\n");
	printf("adress v_b: %p\n", &v_b);
	printf("\n");
	printf("adress v_a: %p\n", &v_a);
	printf("\n");

    tmp = *v_a;
    printf("tmp après à l'adresse : [%p] = <tmp = *v_a> = %i\n", &tmp, tmp);
	printf("\n");
    printf("v_a après à l'adresse : [%p] = <tmp = *v_a> = %d\n", &v_a, *v_a);
    *v_a = *v_b;
	printf("\n");
    printf("v_a après à l'adresse : [%p] = <*v_a = *v_b> = %d\n", &v_a, *v_a);
	printf("\n");
    printf("v_b après à l'adresse : [%p] = <*v_a = *v_b> = %d\n", &v_b, *v_b);
	printf("\n");
    *v_b = tmp;
    printf("v_b après à l'adresse : [%p] = <*v_b = tmp> = %d\n", &v_b, *v_b);
	printf("\n");
    printf("v_a après à l'adresse : [%p] = <*v_b = tmp> = %d\n", &v_a, *v_a);
}

int main(void)
{
    int a = 14;
    int b = 60;

    printf("avant %i\n", a);
	printf("\n");
    printf("adresse %p\n", &a);
	printf("\n");
    printf("avant %i\n", b);
	printf("\n");
    printf("avant adresse %p\n", &b);
	printf("\n");
    ft_swap(&a, &b);
	printf("\n");
    printf("après %i\n", a);
	printf("\n");
    printf("après adresse %p\n", &a);
	printf("\n");
    printf("après %i\n", b);
	printf("\n");
    printf("après adresse %p\n", &b);
}
