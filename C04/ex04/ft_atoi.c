
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_atoi(char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] >= 9 && str[i] <= 13 && str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] > 9)
    {
        if (res > INT_MAX)
            return (-1);
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res * sign);
}

int main(void)
{
    char str[] = "2147483649300989450684568a";

    printf("%i\n", ft_atoi(str));
    printf("%i\n", atoi(str));
}