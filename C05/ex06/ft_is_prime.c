
#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 0)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%i\n", ft_is_prime(1));
}