/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:26:15 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 16:34:42 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_num(t_list **stack_x)
{
	t_list	*big;
	
	big = is_this_big(stack_x);
	while (!is_this_order(stack_x))
	{
		if (big == *stack_x)
			r_a(stack_x);
		else if (big == (*stack_x)->next)
			rr_a(stack_x);
		else
			s_a(stack_x);
	}
}

void	four_num(t_list **stack_a, t_list **stack_b)
{
	t_list	*small;
	
	small = is_this_small(stack_a);
	while (!is_this_order(stack_a))
	{
		while (small != *stack_a)
				r_a(stack_a);
		if (small == stack_a)
		{
			p_b(stack_a, stack_b);
			if (!is_this_big(stack_a))
				three_num(stack_a);
			p_a(stack_b, stack_a);
		}
	}
}

void	five_num (t_list **stack_a, t_list **stack_b)
{
	t_list	*small;

	small = is_this_small(stack_a);
	while (small != *stack_a)
	{
		r_a(stack_a);
		small = is_this_small(stack_a);
	}
	p_b(stack_a, stack_b);
	while (small != *stack_a)
	{
		r_a(stack_a);
		small = is_this_small(stack_a);
	}
	p_b(stack_a, stack_b);
	if (!is_this_order(stack_a))
		three_num(stack_a);
	p_a(stack_b, stack_a);
	p_a(stack_b, stack_a);
	if (!is_this_order(stack_a))
			s_a(stack_a);
}

int	square_root(int number) //funcion para sacar el num que se necesita en el rango del algo dde k-sort
{
	int	i;

	if (number < 4)
		return (1);
	i = 2;
	while (i * i < number)
		i++;
	if (i * i > number)
	{
		if ((i * i - number) < ((i - 1) * (i - 1) + (-number)))
			return (i);
	}
	return (i - 1);
}