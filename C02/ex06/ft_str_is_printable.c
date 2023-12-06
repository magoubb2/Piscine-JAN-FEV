
#include <stdio.h>

int ft_str_is_printable(char *str)
{
		int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 0 && str[i] <= 127)))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char str[] = "avc∆e";
	char str1[] = "12345";
	char str2[] = "abc*&";
	char str3[] = "œ∑∂¶™¥ π";

	printf("%i\n", ft_str_is_printable(str));
	printf("%i\n", ft_str_is_printable(str1));
	printf("%i\n", ft_str_is_printable(str2));
	printf("%i\n", ft_str_is_printable(str3));
}