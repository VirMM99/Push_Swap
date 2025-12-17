/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_moves.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:01:14 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/17 13:02:34 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	reverse_rotate_this(a);
	write (1, "rra\n", 3);
}
void	rr_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	reverse_rotate_this(b);
	write (1, "rrb\n", 3);
}

void	r_r(t_list **a, t_list **b)
{
	int done;
	
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
	if (done) //No entiendo no sería si done = 1 y ya printeas??
		write(1, "rrr\n", 3);
}