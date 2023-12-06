
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[] = "hello";
	char src[] = "world";
	unsigned int n = 5;

	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s\n", strncpy(dest, src, n));
	return (0);
}