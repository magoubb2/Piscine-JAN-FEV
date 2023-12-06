
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char str[] = "abcde";
	char str1[] = "12345";
	char str2[] = "abc*&";
	char str3[] = "";

	printf("%i\n", ft_str_is_alpha(str));
	printf("%i\n", ft_str_is_alpha(str1));
	printf("%i\n", ft_str_is_alpha(str2));
	printf("%i\n", ft_str_is_alpha(str3));
}