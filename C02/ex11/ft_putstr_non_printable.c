
#include <unistd.h>
#include <stdio.h>

void hexa(unsigned int nb)
{
	char *hex;

	hex = "0123456789abcdef";
	write(1, &hex[nb / 16], 1);
	write(1, &hex[nb % 16], 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;
	char *hex;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			hexa((unsigned int)str[i]);
		}
		i++;
	}
}

int	main(void)
{
	char	str[32];
	int		i;

	i = 0;
	while (i < 32 - 1)
	{
		str[i] = i + 1;
		i++;
	}
	str[31] = '\0';
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("%s \n", "");
	ft_putstr_non_printable(str);
	printf("%s \n", "");
}