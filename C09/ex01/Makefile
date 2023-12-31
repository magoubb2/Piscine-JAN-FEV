
SRCS = src/ft_strlen.c src/ft_strcmp.c src/ft_putchar.c src/ft_putstr.c src/ft_swap.c

# Define object files
OBJS = $(SRCS:.c=.o)

# Define the library name
NAME = libft.a

# Define the compiler
CC = gcc

# Define compiler flags
CFLAGS = -Wall -Wextra -Werror -g

# Define the command for removing files and directories
RM = rm -rf

# Define the include directory
INCS = includes

# Default target
all: $(NAME)

# Rule to build the library
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

# Rule to compile source files into object files
%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCS) -c $< -o $@

# Clean up object files
clean:
	@$(RM) $(OBJS)

# Clean up object files and the library
fclean: clean
	@$(RM) $(NAME)

# Rebuild the library
re: fclean all

# Phony targets (targets that are not actual files)
.PHONY: all clean fclean re