
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a = 14;
    int b = 60;

    printf("avant %i\n", a);
    printf("apres %i\n", b);
    ft_swap(&a, &b);
    printf("avant %i\n", a);
    printf("apres %i\n", b);
}