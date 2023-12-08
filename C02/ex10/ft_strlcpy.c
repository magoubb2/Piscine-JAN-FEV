
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_memcpy (char *dest, char *src, unsigned int num )
{
    int i;

    i = 0;
    while (i < num)
    {
        dest[i] = src[i];
        i++;
    }
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int src_len;
    int i;

    src_len = ft_strlen(src);
    i = 0;
    if (size)
    {
        if (src_len + 1 > size)
        {
            dest[i] = src[i];
            i++;
        }
        else if (size != 0)
        {
            dest[i] = src[i];
            i++;
        }
    }
    dest[size - 1] = '\0';
    return (src_len);
}

int main(void)
{
    char src[] = "hello1234";
    char dest[] = "wordl";
    unsigned int size = 5;

    printf("%i\n", ft_strlcpy(dest, src, size));
    printf("%lu\n", strlcpy(dest, src, size));
}