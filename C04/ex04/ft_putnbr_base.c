
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    
    base_len = ft_strlen(base);
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= base_len)
    {
        ft_putnbr_base(nbr / base_len, base);
        ft_putnbr_base(nbr % base_len, base);
    }
    else 
    {
        write(1,&base[nbr], 1);
    }
}

int	main(void)
{
	ft_putnbr_base(0xFAA33CC, "01");
	printf("\n");
	ft_putnbr_base(0xFAA33CC, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(188385, "onjrBu");
	printf("\n");
}