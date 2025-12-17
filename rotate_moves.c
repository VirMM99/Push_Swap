/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:58:16 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/17 13:00:12 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int done;
	
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
	if (done) //No entiendo no sería si done = 1 y ya printeas??
		write(1, "rr\n", 3);
}
