
#include <stdio.h>
#include <string.h>


// used to concatenate a specified number of characters from one string to another.
// Works the same as ft_strcat but, once i is equal to n we add a null terminated char
// at the end of dest so that the condition (src[i] != '\0') is no longuer true nor executed.
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_memcpy(char *dest, char *src, int num)
{
    int i;

    i = 0;
    while (i < num)
    {
        dest[i] = src[i];
        i++;
    }
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int dest_len;
    int src_len;
    int i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    while (i < nb && src[i] != '\0')
    {
        ft_memcpy(dest + dest_len, src, src_len + 1);
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}

int main(void)
{
    char dest[20] = "hello";
    char src[] = "world";
    unsigned int nb = 2;

    printf("%s\n", ft_strncat(dest, src, nb));
    printf("%s\n", strncat(dest, src, nb));
}