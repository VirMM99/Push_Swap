/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:26:15 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:46:06 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_num(t_list **stack_x)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_x)->index;
	b = (*stack_x)->next->index;
	c = (*stack_x)->next->next->index;
	if (a > b && b < c && a < c)
		s_a(stack_x);
	else if (a > b && b > c)
	{
		s_a(stack_x);
		rr_a(stack_x);
	}
	else if (a > b && b < c && a > c)
		r_a(stack_x);
	else if (a < b && b > c && a < c)
	{
		s_a(stack_x);
		r_a(stack_x);
	}
	else if (a < b && b > c && a > c)
		rr_a(stack_x);
}

void	four_num(t_list **stack_a, t_list **stack_b)
{
	t_list	*small;

	small = is_this_small(*stack_a);
	while (*stack_a != small)
		r_a(stack_a);
	p_b(stack_a, stack_b);
	three_num(stack_a);
	p_a(stack_b, stack_a);
}

void	five_num(t_list **stack_a, t_list **stack_b)
{
	t_list	*small;

	small = is_this_small(*stack_a);
	while (*stack_a != small)
		r_a(stack_a);
	p_b(stack_a, stack_b);
	small = is_this_small(*stack_a);
	while (*stack_a != small)
		r_a(stack_a);
	p_b(stack_a, stack_b);
	three_num(stack_a);
	p_a(stack_b, stack_a);
	p_a(stack_b, stack_a);
}

int	square_root(int number)
{
	int	i;

	if (number <= 1)
		return (1);
	i = 1;
	while (i * i <= number)
		i++;
	return (i - 1);
}
