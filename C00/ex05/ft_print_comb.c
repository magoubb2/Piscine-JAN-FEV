#include <unistd.h>

// 

void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    char comb[3];

    a = 0;

    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                comb[0] = a + 48;
                comb[1] = b + 48;
                comb[2] = c + 48;
                write(1, comb, 3);
                if (a != 7 || b != 8 || c != 9)
                    write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb();
}