
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char str1[] = "hello";
	char str2[] = "ell7";

	printf("%i\n", ft_strcmp(str1, str2));
	printf("%i\n", strcmp(str1, str2));
}