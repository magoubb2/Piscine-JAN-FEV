#include <unistd.h>
#include <stdio.h>

void coma_space(int a, int b)
{
    if (a != 98 || b != 99)
        write(1, ", ", 2);
}

void comb(int a, int b)
{
    char comb[5];

    comb[0] = (a / 10) + 48;
    comb[1] = (a % 10) + 48;
    comb[2] = ' ';
    comb[3] = (b / 10) + 48;
    comb[4] = (b % 10) + 48;
    printf(" \ndivision a:->%i", (a / 10));
    printf(" \nmodulo a:->  %i", (a % 10));
    printf(" \ndivision b:->%i", (b / 10));
    printf(" \nmodulo b:->  %i\n", (b % 10));

    write(1, comb, 5);
    coma_space(a, b);
}


void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            comb(a, b);
            b++;
        }
        a++;
    }
}


int main(void)
{
    ft_print_comb2();
}