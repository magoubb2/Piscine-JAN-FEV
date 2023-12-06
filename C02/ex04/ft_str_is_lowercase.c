
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
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
	char str3[] = "ABCDE";

	printf("%i\n", ft_str_is_lowercase(str));
	printf("%i\n", ft_str_is_lowercase(str1));
	printf("%i\n", ft_str_is_lowercase(str2));
	printf("%i\n", ft_str_is_lowercase(str3));
}