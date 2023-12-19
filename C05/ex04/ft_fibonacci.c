
#include <stdio.h>

// Calculates the Fibonacci number at a given index using recursion.
// Recursive exemple :
// f6
// f5 + f4
// f4 + f3 f3 + f2
// f3 + f2 f2 + f(1) f2 + (1) (1) + 0
// f2 + (1) (1) + 0 (1) + 0 (1) + 0 
// (1) + 0
// result: 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 8.
// If index is less than 2 we return index. Else we continue the recursive.
int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
    printf("%i\n", ft_fibonacci(6));
}