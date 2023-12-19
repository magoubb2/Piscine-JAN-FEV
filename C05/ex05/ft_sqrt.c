
#include <stdio.h>

// Calculate the square root of a given non-negative integer.
// The while loop continue until (x) is no longer more than y.
// Exemple : 64
// 64 = (64 + 1) / 2 -> 32
// 1 = 64 / 32 -> 2
//
// 32 = (32 + 1) / 2 -> 16
// 2 = 64 / 16 -> 4
//
// 16 = (16 + 1) / 2 -> 8
// 4 = 64 / 8 -> 8
//
// (x) is no longer more than y. now we need to check if 8 is really
// the square root of 64 by doing (x) * (x),  which means -> (x^2).
// and inded 8 * 8 = 64 so we return (x) which is 8 in this case.
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