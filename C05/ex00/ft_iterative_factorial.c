
#include <stdio.h>

// Until i is less than nb we multiply result by i.
// Exemple: 8.
// 1 = 1 * 1
// 1 = 1 * 2
// 2 = 2 * 3
// 6 = 6 * 4
// 24 = 24 * 5
// 120 = 120 * 6
// 720 = 720 * 7
// 5040 = 5040 * 8
// res = 40320

int ft_iterative_factorial(int nb)
{
    int i;
    int result;
    
    if (nb < 0)
        return (0);
    result = 1;
    i = 1;
    while (i <= nb)
    {
        result = result * i;
        i++;
    }
    return (result);
}

int main(void)
{
    printf("%i\n", ft_iterative_factorial(8));
}