
#include <unistd.h>

void hexa(int nb)
{
	char *hex;

	hex = "0123456789abcdef";
	if (nb > 16)
	{
		hexa(nb / 16);
		hexa(nb % 16);
	}
	write(1, "0", 1);
	write(1, &hex[nb], 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;
	char *hex;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 30 && str[i] <= 126)
			write(1, &str[i], 1);
		// else if (str[i] == 127)
		// 	write(1, "7f", 2);
		else
		{
			write(1, "\\", 1);
			hexa((int)str[i]);
		}
		i++;
	}
}

int main(void)
{
	char str[] = "\r\f\b\v\a\t\e";

	ft_putstr_non_printable(str);
}