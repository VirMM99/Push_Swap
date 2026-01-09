NAME = push_swap

SRCS = push_swap.c \
	utilsfromlibft/ft_atol.c \
	utilsfromlibft/ft_atoi.c \
	utilsfromlibft/ft_hex.c \
	utilsfromlibft/ft_isdigit.c \
	utilsfromlibft/ft_lstadd_front_bonus.c \
	utilsfromlibft/ft_lstlast_bonus.c \
	utilsfromlibft/ft_lstsize_bonus.c \
	utilsfromlibft/ft_printf.c \
	utilsfromlibft/ft_putchar.c \
	utilsfromlibft/ft_putnbr.c \
	utilsfromlibft/ft_putptr.c \
	utilsfromlibft/ft_putstr.c \
	utilsfromlibft/ft_split.c \
	utilsfromlibft/ft_strlen.c \
	utilsfromlibft/ft_substr.c \
	movements/push_moves.c \
	movements/reverse_rotate_moves.c \
	movements/rotate_moves.c \
	movements/swap_moves.c \
	utils/algorithms_num.c \
	utils/checking_numbers.c \
	utils/k_sort.c \
	utils/parse.c \
	utils/ps_utils.c \
	utils/ps_utilstwo.c


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

.PHONY: all clean fclean re 