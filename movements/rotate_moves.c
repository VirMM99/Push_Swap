/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:58:16 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:41:10 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_it(t_list **stack_x)
{
	t_list	*node1;
	t_list	*last_node;

	if (!stack_x || !*stack_x || !(*stack_x)->next)
		return ;
	node1 = *stack_x;
	*stack_x = node1->next;
	last_node = *stack_x;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = node1;
	node1->next = NULL;
}

void	r_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	rotate_it(a);
	write (1, "ra\n", 3);
}

void	r_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	rotate_it(b);
	write (1, "rb\n", 3);
}

void	r_r(t_list **a, t_list **b)
{
	int	done;

	done = 0;
	if (a && *a && (*a)->next)
	{
		rotate_it(a);
		done = 1;
	}
	if (b && *b && (*b)->next)
	{
		rotate_it(b);
		done = 1;
	}
	if (done == 1)
		write(1, "rr\n", 3);
}
