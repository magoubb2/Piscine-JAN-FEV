
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_memcpy (char *dest, char *src, unsigned int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
}

char *ft_strcat(char *dest, char *src)
{
	unsigned int dest_len;
	unsigned int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	ft_memcpy(dest + dest_len, src, src_len + 1);
	return (dest);
}

int main(void)
{
	char dest[20] = "world";
	const char src[] = "hello";

	printf("%s\n", ft_strcat(dest, (char *)src));
	printf("\n");
	printf("%s\n", strcat(dest, src));
}