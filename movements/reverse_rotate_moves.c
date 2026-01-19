/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_moves.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:01:14 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:40:21 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_this(t_list **stack_x)
{
	t_list	*node1;
	t_list	*last_node;

	if (!stack_x || !*stack_x || !(*stack_x)->next)
		return ;
	node1 = NULL;
	last_node = *stack_x;
	while (last_node->next != NULL)
	{
		node1 = last_node;
		last_node = last_node->next;
	}
	node1->next = NULL;
	last_node->next = *stack_x;
	*stack_x = last_node;
}

void	rr_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	reverse_rotate_this(a);
	write (1, "rra\n", 4);
}

void	rr_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	reverse_rotate_this(b);
	write (1, "rrb\n", 4);
}

void	rr_r(t_list **a, t_list **b)
{
	int	done;

	done = 0;
	if (a && *a && (*a)->next)
	{
		reverse_rotate_this(a);
		done = 1;
	}
	if (b && *b && (*b)->next)
	{
		reverse_rotate_this(b);
		done = 1;
	}
	if (done)
		write(1, "rrr\n", 4);
}
