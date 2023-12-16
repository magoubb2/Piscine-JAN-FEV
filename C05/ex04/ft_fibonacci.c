
#include <stdio.h>

int ft_fibonacci(int index)
{
    int i;
    int a;
    int b;
    int c;

    a = 0;
    b = 1;
    i = 2;
    if (index == 0)
        return (a);
    while (i <= index)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return (b);
}

int main(void)
{
    printf("%i\n", ft_fibonacci(0));
}