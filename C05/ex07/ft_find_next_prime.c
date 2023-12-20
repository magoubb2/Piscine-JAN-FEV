
#include <stdio.h>

// This function finds the next prime number greater than or equal to a given integer.
// As long as (i) is less than (nb - 1) we check if (nb) % (i)  ==  0  if  it is,  we
// increment (nb) and reset i to 2. Because (nb) can only be divided by 1 or (nb)  so
// it is not a prime number so we go to the next number.
// If (nb) % (i) is not 0 we increment (i) to try to divide (nb) by  another divider.
// We do this until (i) is no longer less than (nb - 1) or if (i)  equal to (nb - 1).
int ft_find_next_prime(int nb)
{
    int i;

    i = 2;
    while (i <= nb - 1)
    {
        if (nb % i == 0)
        {
            nb++;
            i = 2;
        }
        else
            i++;
    }
    return (nb);
}

int main(void)
{
    printf("%i\n", ft_find_next_prime(8));
}