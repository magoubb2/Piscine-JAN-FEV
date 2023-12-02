#include <unistd.h>

void comb(int a, int b, int c, int d)
{
    char comb[5];

    comb[0] = a + 48;
    comb[1] = b + 48;
    comb[2] = ' ';
    comb[3] = c + 48;
    comb[4] = d + 48;

    write(1, comb, 5);
}

void coma_space(int a, int b, int c, int d)
{
    if (a != 9 || b != 8 || c != 9 || d != 9)
        write(1, ", ", 2);
}

void ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = 0;
    while (a <= 9)
    {
        b = 0;
        while (b <= 8)
        {
            c = a;
            while (c <= 9)
            {
                d = b + 1;
                while (d <= 9)
                {
                    comb(a, b, c, d);
                    coma_space(a, b, c, d);
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
}