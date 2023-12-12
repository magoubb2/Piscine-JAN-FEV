
#include <unistd.h>

void ft_putnbr(int nb)
{
    char *n;

    n = "0123456789";

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    write(1, &n[nb], 1);
}

int main(void)
{
    ft_putnbr(4210987);
}