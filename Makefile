NAME = push_swap.a

SRCS = push_swap.c \
	ft_atol.c \
	ft_hex.c \
	(LISTAS)
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putptr.c \
	ft_putstr.c \
	ft_split.c \
	ft_strlen.c \
	ft_substr.c \
	(Mis Funciones) 
	push_moves.c \
	(push_swap.c) \
	reverse_rotate_moves.c \
	rotate_moves.c \
	swap_moves.c


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