
int ft_strlen(int *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}