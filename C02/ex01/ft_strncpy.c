
#include <stdio.h>
#include <string.h>

// copy from src to dest up until n.
#define SIZE 15

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		printf("[%i] = %s\n", i, dest);
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char src[15] = "world yoyololo";
	char dest[15] = "hello ";
	const unsigned int n = 15;

	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s\n", strncpy(dest, src, n));
	return (0);
}