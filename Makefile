NAME = push_swap.a

SRCS = push_swap.c \
	ft_atol.c \
	ft_atoi.c \
	ft_hex.c \
	ft_isdigit.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstsize_bonus.c \
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putptr.c \
	ft_putstr.c \
	ft_split.c \
	ft_strlen.c \
	ft_substr.c \
	push_moves.c \
	reverse_rotate_moves.c \
	rotate_moves.c \
	swap_moves.c \
	algorithms_num.c \
	checking_numbers.c \
	k_sort.c \
	parse.c \
	ps_utils.c \
	ps_utilstwo.c \


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