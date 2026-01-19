/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:33:23 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:41:37 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_this(t_list **stack_x)
{
	t_list	*node1;
	t_list	*node2;

	if (!stack_x || !*stack_x || !(*stack_x)->next)
		return ;
	node1 = *stack_x;
	node2 = node1->next;
	node1->next = node2->next;
	node2->next = node1;
	*stack_x = node2;
}

void	s_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	swap_this(a);
	write (1, "sa\n", 3);
}

void	s_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	swap_this(b);
	write (1, "sb\n", 3);
}

void	s_s(t_list **a, t_list **b)
{
	int	done;

	done = 0;
	if (a && *a && (*a)->next)
	{
		swap_this(a);
		done = 1;
	}
	if (b && *b && (*b)->next)
	{
		swap_this(b);
		done = 1;
	}
	if (done)
		write(1, "ss\n", 3);
}
