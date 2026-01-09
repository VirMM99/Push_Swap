/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:07:41 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 17:00:58 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

				//Inclusiones
# include <stdlib.h> //MALLOC
# include <unistd.h> //Write
# include <string.h> //SIZE_T
# include <limits.h> //INT_MIN
# include <stdio.h> 
# include <ctype.h> 
# include <bsd/string.h> 
# include <aio.h> //SIZE_T tmb...

				// Declaración de funciones (BASE)
int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_hex(unsigned int n);
int		ft_upperhex(unsigned int n);
int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_uputnbr(unsigned int n);
int		ft_putptr(unsigned long n);
int		ft_putstr(char *s);

typedef struct s_list
{
	int			content;
	int			position;
	int			index;
	struct s_list	*next;
}	t_list;

				// Declaración de funciones (MIS FUNCIONES)
void	free_the_list(t_list **list);
int		the_error(char *str, int return_value, t_list **stack);
void	free_array(char **array);
t_list	*ft_lstnew(int *content);
void	ft_lstadd_back(t_list **stack_x, t_list *new_node);
int		count_argv(t_list *stack);
void	re_index_num(t_list **list);
int		is_this_order(t_list **stack_x);
t_list	*is_this_small(t_list **stack_x);
t_list	*is_this_big(t_list **stack_x);
void	three_num(t_list **stack_x);
void	four_num(t_list **stack_a, t_list **stack_b);
void	five_num(t_list **stack_a, t_list **stack_b);
int		square_root(int number);
void	move_it_to_b(t_list **stack_a, t_list **stack_b, int number);
int		rotations_count(t_list *stack, int max_position);
void	k_sort(t_list **stack_a, t_list **stack_b, int number);
void	check_if_numbers(t_list **stack_x, char **num);
void	check_duplicates(t_list **stack_x);
int		check_biggie_num(char *numbers);
int		checking_atoil(char *numbers);
void	checking_lenght_range_ofnum(char **num, t_list **stack_x);
int		check_the_chars(char *num);
void	check_array(char **num, t_list **stack_x);

				// Declaración de funciones (LISTAS)

void	ft_lstadd_front(t_list **lst, t_list *new); //Creo No Hace falta
void	ft_lstclear(t_list **lst, void (*del)(void*)); //Creo No Hace falta
void	ft_lstdelone(t_list *lst, void (*del)(void*)); //Creo No Hace falta
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst); //Creo No Hace falta

				// Declaración de funciones (MIS LISTAS MOVS)
void	swap_this(t_list **stack_x);
void	push_it(t_list **dst, t_list **src);
void	rotate_it(t_list **stack_x);
void	reverse_rotate_this(t_list **stack_x);

				// Declaración de funciones (MIS LISTAS TYPES OF MOVS)
void	s_a(t_list **a);
void	s_b(t_list **b);
void	s_s(t_list **a, t_list **b);
void	p_a(t_list **b, t_list **a);
void	p_b(t_list **a, t_list **b);
void	r_a(t_list **a);
void	r_b(t_list **b);
void	r_r(t_list **a, t_list **b);
void	rr_a(t_list **a);
void	rr_b(t_list **b);
void	r_r(t_list **a, t_list **b);

#endif