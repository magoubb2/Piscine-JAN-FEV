
#include <stdio.h>
#include <string.h>

// This is the same as strcmp but it compare up to n number of char.
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int main(void)
{
	char s1[] = "hello";
	char s2[] = "helll";
	unsigned int n = 4;

	printf("%i\n", ft_strncmp(s1, s2, n));
	printf("%i\n", strncmp(s1, s2, n));
}