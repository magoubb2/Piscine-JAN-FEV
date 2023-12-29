
#!/bin/bash

gcc -Wall -Wextra -Werror -c ft_strlen.c ft_strcmp.c ft_putchar.c ft_putstr.c ft_swap.c test.c

ar rc libft.a ft_strlen.o ft_strcmp.o ft_putchar.o ft_putstr.o ft_swap.o test.o

rm ft_strlen.o ft_strcmp.o ft_putchar.o ft_putstr.o ft_swap.o test.o