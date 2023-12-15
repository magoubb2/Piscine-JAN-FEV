
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 *
 * 1. The 'n' variable is a pointer to a string of characters representing
 *    the digits from 0 to 9. It serves as a mapping for each digit during
 *    standard output.
 * 2. Recursion is employed to print each digit of a number. For instance:
 *    - Given nb = 1234, the function is recursively called until 'nb'  is
 *      less than 9.
 *      - Iteration 1: 1234 / 10 = 123 -> 1st ft_putnbr call.
 *      - Iteration 2: 123 / 10 = 12 -> 2nd ft_putnbr call.
 *      - Iteration 3: 12 / 10 = 1 -> 3rd ft_putnbr call.
 *    Once  'nb' is less than 9, the condition is exited, and write(1)  is 
 *    performed.
 *    The recursion is then   revisited,  leading to  the following writes:
 *    - First recursive  call: write -> 12 % 10 = 2.
 *    - Second recursive call: write -> 123 % 10 = 3.
 *    - Third recursive  call: write -> 1234 % 10 = 4.
 * 3. The final output is: 1234.
 *
 **/
void ft_putnbr(int nb)
{
    char *n;

    n = "0123456789";

    if (nb == INT_MIN)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    write(1, &n[nb % 10], 1);
}

int main(void)
{
    int nb = 123456; 
    ft_putnbr(nb);
    return 0;
}