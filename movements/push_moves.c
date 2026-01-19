/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:49:07 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:39:40 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_it(t_list **dest, t_list **src)
{
	t_list	*temp;

	if (!src || !*src)
		return ;
	temp = *src;
	*src = temp->next;
	temp->next = *dest;
	*dest = temp;
}

void	p_a(t_list **b, t_list **a)
{
	if (!b || !*b)
		return ;
	push_it(a, b);
	write (1, "pa\n", 3);
}

void	p_b(t_list **a, t_list **b)
{
	if (!a || !*a)
		return ;
	push_it(b, a);
	write (1, "pb\n", 3);
}
