
void ft_swap(int *v_a, int *v_b)
{
    int tmp = 0;

    tmp = *v_a;
    *v_a = *v_b;
    *v_b = tmp;
}