
#include <stdlib.h>
#include <stdio.h>

 // takes a pointer to a pointer to an integer (int **range) as its first parameter. 
 // This pointer is used to store the address of the  dynamically  allocated  array.
 // Fill the array with consecutive integers in the specified range
int ft_ultimate_range(int **range, int min, int max)
{
    unsigned int i;
    unsigned int j;
    unsigned int len;

    i = 0;
    j = 0;
    len = max - min;
    *range = (int *)malloc(sizeof(int) * len);
    while (i < len)
    {
        (*range)[i] = min + j;
        j++;
        i++;
    }
    return (**range);
}

int main(void)
{
    int min = 5;
    int max = 8;
    int *tab;
    unsigned int i = 0;
    unsigned int len;
    len = max - min;
    int res;

    res = ft_ultimate_range(&tab, min, max);
    while (i < len)
    {
        printf("%i\n", tab[i]);
        i++;
    }
}