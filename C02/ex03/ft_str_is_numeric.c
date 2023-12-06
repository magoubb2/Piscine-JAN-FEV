
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char str[] = "abcde";
	char str1[] = "12345";
	char str2[] = "abc1*&";
	char str3[] = "";

	printf("%i\n", ft_str_is_numeric(str));
	printf("%i\n", ft_str_is_numeric(str1));
	printf("%i\n", ft_str_is_numeric(str2));
	printf("%i\n", ft_str_is_numeric(str3));
}