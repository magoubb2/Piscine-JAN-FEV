
#include <stdio.h>
#include <string.h>

// We concatenate two string, "src" and "dest". It appends the character of the src 
// to the end of the dest string. We calculate the lenght of dest and src. We then use
// ft_memcpy to copy the character from the src to the end of the dest string.
// So for exemple, i have : dest[] = "hello" 
//							dest_len = 5                                      
//							dest + dest_len = [0]'h'[1]'e'[2]'l'[3]'l'[4]'o'[5]'\0'
// So this this is where we start to concatenate src to dest				 ^
// This condition-> (dest + dest_len) bring us to the null terminated char of dest.
// So we can start to concatenate at the end of the dest string. And this condition,
// -> (src_len + 1) is so we include the null terminated char of src.
char *ft_strcat(char *dest, char *src);

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