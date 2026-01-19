/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:07:41 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:38:49 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				index;
	int				position;
	struct s_list	*next;
}	t_list;

		// Declaración de funciones (Libft)

int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_putnbr(int n);
int		ft_putptr(unsigned long n);
int		ft_putstr(char *s);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **stack, t_list *new_node);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);

			// Declaración de funciones (Mis funciones)

void	free_array(char **array);
void	check_array(char **num, t_list **stack);
void	check_if_numbers(t_list **stack, char **num);
void	checking_lenght_range_ofnum(char **num, t_list **stack);
void	check_duplicates(t_list **stack);
void	free_the_list(t_list **list);
int		the_error(char *str, int return_value, t_list **stack);

			// Declaración de funciones (Indexación y ordenación)

void	re_index_num(t_list **list);
int		count_argv(t_list *stack);
int		is_this_order(t_list *stack);
t_list	*is_this_small(t_list *stack);
t_list	*is_this_big(t_list *stack);
void	three_num(t_list **stack);
void	four_num(t_list **stack_a, t_list **stack_b);
void	five_num(t_list **stack_a, t_list **stack_b);
int		square_root(int number);
void	k_sort(t_list **stack_a, t_list **stack_b, int size);

			// Declaración de funciones (MIS LISTAS MOVS)
void	swap_this(t_list **stack);
void	push_it(t_list **dst, t_list **src);
void	rotate_it(t_list **stack);
void	reverse_rotate_this(t_list **stack);

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
void	rr_r(t_list **a, t_list **b);

#endif