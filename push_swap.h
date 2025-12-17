/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:07:41 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/17 13:05:10 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

				//Inclusiones necesarias
# include <stdlib.h> //MALLOC
# include <unistd.h> //Write
# include <string.h> //SIZE_T
# include <limits.h> //INT_MIN
# include <stdio.h> 
# include <ctype.h> 
# include <bsd/string.h> 
# include <aio.h> //SIZE_T tmb...

				// Declaracion de funciones base
long	ft_atol(const char *nptr);
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

				// Declaracion de funciones (LISTAS)
typedef struct s_list
{
	int			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

				// Declaracion de funciones (MIS LISTAS MOVS)
void	swap_this(t_list **stack_x);
void	push_it(t_list **dst, t_list **src);
void	rotate_it(t_list **stack_x);
void	reverse_rotate_this(t_list **stack_x);
				// Declaracion de funciones (MIS LISTAS TYPES OF MOVS)
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