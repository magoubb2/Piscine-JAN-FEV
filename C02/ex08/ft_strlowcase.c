
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "HellO1234A5a6B";

	printf("%s\n", ft_strlowcase(str));
}