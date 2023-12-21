#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

// Step 1). We caluculate the lenght between min and max so we can no what  the
// size of tab should be.
// Step 2). Then we allocate that size to tab.
// Step 3). As long as (i) is more than (len), we fill the array with specified
// ranged.
// Exemple: min = 5 and max = 8
//      tab = [min]+[j]
// 1). tab[i] = 5 + 0 -> tab[5]
// 1). tab[i] = 5 + 1 -> tab[6]
// 1). tab[i] = 5 + 2 -> tab[7]
// tab = {5, 6, 7}
int *ft_range(int min, int max)
{
    int *tab;
    unsigned int i;
    unsigned int j;
    unsigned int len;

    if (min >= max)
        return (NULL);
    len = max - min + 1;
    tab = (int *)malloc(sizeof(int) * (len));
    i = 0;
    j = 0;
    while (i < len)
    {
        tab[i] = min + j;
        printf("[%i]\n", min);
        printf("[%i]\n", j);
        i++;
        j++;
    }
    return (tab);
}


int main(void)
{
    int min = 5;
    int max = 8;
    unsigned int i = 0;
    unsigned int len;
    len = max - min;
    int *res;

    res = ft_range(min, max);
    while (i < len)
    {
        printf("%i\n", res[i]);
        i++;
    }
}
