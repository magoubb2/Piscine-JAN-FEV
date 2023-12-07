
#include <stdio.h>

//

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "         123BLABLA-BLABLA.";

	printf("%s\n", ft_strcapitalize(str));
}