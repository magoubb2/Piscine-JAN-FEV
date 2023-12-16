
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int res;

    i = 1;
    res = nb;
    if (power == 0)
        return (1);
    while (i < power)
    {
        res = res * nb;
        i++;
    }
    return (res);
}

int main(void)
{
    printf("%i\n", ft_iterative_power(5, 5));
}
