
#include <stdio.h>
#include <string.h>

// Paste the characters by character from src to dest
// until we reach '\0' of src.

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		printf("[%i] = %s\n", i, dest);
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[] = "hello";
	char src[] = "worl";

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));
}