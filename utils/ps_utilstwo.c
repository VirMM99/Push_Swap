/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utilstwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:51:43 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/15 10:39:40 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_argv(t_list *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

void	re_index_num(t_list **list)
{
	t_list	*temp;
	t_list	*move;
	int		rank;

	temp = *list;
	while (temp != NULL)
	{
		move = *list;
		rank = 0;
		while (move != NULL)
		{
			if (temp->content > move->content)
				rank++;
			move = move->next;
		}
		temp->index = rank;
		temp = temp->next;
	}
}

int	is_this_order(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_list	*is_this_small(t_list *stack_x)
{
	t_list	*node;
	t_list	*small_node;

	if (!stack_x || !stack_x)
	{
		return (NULL);
	}
	node = stack_x;
	small_node = stack_x;
	while (node != NULL)
	{
		if (node->index < small_node->index)
			small_node = node;
		node = node->next;
	}
	return (small_node);
}
