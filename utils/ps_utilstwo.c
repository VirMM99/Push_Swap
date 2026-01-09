/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utilstwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:51:43 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 18:13:08 by vimirand         ###   ########.fr       */
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

void	re_index_num(t_list **list) // para indexsar y no 'contar' los negativos. los cuentas pero no te lias (position num)
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

int	is_this_order(t_list **stack_x)
{
	t_list	*node;

	node = *stack_x;
	while (node != NULL && node->next != NULL)
	{
		if (node->position > node->next->position)
		{
			return (0);
		}
		node = node->next;
	}
	return (1);
}

t_list	*is_this_small(t_list **stack_x)
{
	t_list	*node;
	t_list	*small_node;

	if (!stack_x || !*stack_x)
	{
		return (NULL);
	}
	node = *stack_x;
	small_node = *stack_x;
	while (node != NULL)
	{
		if (node->position < small_node->position)
			small_node = node;
		node = node->next;
	}
	return (small_node);
}

t_list	*is_this_big(t_list **stack_x)
{
	t_list	*node;
	t_list	*big_node;

	if (!stack_x || !*stack_x)
	{
		return (NULL);
	}
	node = *stack_x;
	big_node = *stack_x;
	while (node != NULL)
	{
		if (node->position > big_node->position)
			big_node = node;
		node = node->next;
	}
	return (big_node);
}
