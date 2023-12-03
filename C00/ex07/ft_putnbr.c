#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb == INT_MIN)
    {
        write(1, "2147483648", 10);
    }
    else if (nb < 9)
    {
        nb = nb + 48;
        write(1, &nb, 1);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(void)
{
    int nb = 314;
    printf("    %i\n", nb);

    ft_putnbr(nb);
}