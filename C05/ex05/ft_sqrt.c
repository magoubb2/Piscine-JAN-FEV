
#include <stdio.h>

int ft_sqrt(int nb)
{
    int x;
    int y;

    x = nb;
    y = 1;
    if (nb < 0)
        return (0);
    while (x > y)
    {
        x = (x + y) / 2;
        y = nb / x;
    }
    if (x * x != nb)
        return (0);
    return (x);
}

int main(void)
{
    printf("%i\n", ft_sqrt(64));
}