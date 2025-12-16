NAME = push_swap.a

SRCS = push_swap.c \
	ft_atoi.c \ //CAMBIAR EL NOMBREEEE POR ATOL///
	ft_split.c \
	ft_printf.c \
	ft_putstr.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_hex.c \
	ft_putptr.c



CC = cc
CFLAGS = -Wall -Wextra -Werror 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS) 

clean: 
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re bonus