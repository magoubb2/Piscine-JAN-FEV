
#include <stdio.h>

// Check whether a given integer is a prime number. We start (i) at 2 because
// 2 is the first prime number.
// As long as (i) is more than (nb - 1) we check if (nb) % (i) = 0 and if (nb)
// % (i) = 0, it is not a prime number. Because (nb) should only be divisible
// by 1 or (nb).
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb == 1)
        return (0);
    if (nb < 0)
        return (0);
    while (i <= nb - 1)
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
    printf("%i\n", ft_is_prime(2));
    printf("%i\n", ft_is_prime(3));
    printf("%i\n", ft_is_prime(4));
    printf("%i\n", ft_is_prime(5));
    printf("%i\n", ft_is_prime(6));
    printf("%i\n", ft_is_prime(7));
    printf("%i\n", ft_is_prime(8));
    printf("%i\n", ft_is_prime(9));
    printf("%i\n", ft_is_prime(10));
    printf("%i\n", ft_is_prime(11));
    printf("%i\n", ft_is_prime(12));
    printf("%i\n", ft_is_prime(13));
    printf("%i\n", ft_is_prime(14));
    printf("%i\n", ft_is_prime(15));
    printf("%i\n", ft_is_prime(16));
    printf("%i\n", ft_is_prime(17));
}