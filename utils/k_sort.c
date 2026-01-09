/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:45:40 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 18:05:07 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_it_to_b(t_list **stack_a, t_list **stack_b, int number)
{
	int	i;
	int	range;

	i = 0;
	range = square_root(number) * 7 / 5;
	while (*stack_a)
	{
		if ((*stack_a)->position <= i)
		{
			p_b(stack_a, stack_b);
			if (count_argv(*stack_b) > 1)
				r_b(stack_b);
			i++;
		}
		else if ((*stack_a)->position <= i + range)
		{
			p_b(stack_a, stack_b);
			i++;
		}
		else
			r_a(stack_a);
	}
}
int	rotations_count(t_list *stack, int max_position)
{
	int	count;

	count = 0;
	while (stack != NULL && stack->position != max_position)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

void	k_sort(t_list **stack_a, t_list **stack_b, int number)
{
	int	rb_count;
	int	rrb_count;
	
	move_it_to_b(stack_a, stack_b, number);
	while ((number - 1) >= 0)
	{
		rb_count = rotations_count((*stack_b), (number - 1));
		rrb_count = number - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->position != (number - 1))
				r_b(stack_b);
			p_a(stack_b, stack_a);
			number--;
		}
		else
		{
			while ((*stack_b)->position != (number - 1))
				rr_b(stack_b);
			p_a(stack_b, stack_a);
			number--;
		}
	}
}