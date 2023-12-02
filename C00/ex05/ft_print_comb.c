#include <unistd.h>

// 1. First we initialise 3 int (a, b and c) because the bigest 
// number is composed is a 3 digits number. 
// Then we initialise an array of char (comb) of size 3. This array
// holds the character representation of the 3 digits:
// comb[3] -> [0][1][2]
//		   -> [a][b][c]
// 
// Things to look out for:
// 1. No comma and space after last num.
// 2. Check if your output is right.

void comb(int a, int b, int c)
{
	char comb[3];

	comb[0] = a + 48;
	comb[1] = b + 48;
	comb[2] = c + 48;

	write(1, comb, 3);
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
				comb(a, b, c);
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