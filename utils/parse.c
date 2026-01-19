/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:19:25 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/14 19:48:18 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_numbers(t_list **stack_x, char **num)
{
	int		i;
	t_list	*insert_node;
	int		value;

	i = 0;
	if (!num || !num[0])
	{
		free_array(num);
		the_error("Error\n", 1, stack_x);
	}
	while (num[i])
	{
		value = ft_atoi(num[i]);
		insert_node = ft_lstnew(value);
		if (!insert_node)
		{
			free_array(num);
			the_error("Error\n", 1, stack_x);
		}
		ft_lstadd_back(stack_x, insert_node);
		i++;
	}
}

void	check_duplicates(t_list **stack_x)
{
	t_list	*current_stack;
	t_list	*compare;

	if (!stack_x || !*stack_x)
		return ;
	current_stack = *stack_x;
	while (current_stack != NULL)
	{
		compare = current_stack->next;
		while (compare != NULL)
		{
			if (current_stack->content == compare->content)
				the_error("Error\n", 1, stack_x);
			compare = compare->next;
		}
		current_stack = current_stack->next;
	}
}
