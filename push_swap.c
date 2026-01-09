/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:04:16 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 18:21:24 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int	lenth;
	
	check_duplicates(stack_a);
	re_index_num(stack_a);
	lenth = count_argv(*stack_a);
	if (!is_this_order(stack_a))
	{
		if (lenth == 2)
			s_a(stack_a);
		else if (lenth == 3)
			three_num(stack_a);
		else if (lenth == 4)
			four_num(stack_a, stack_b);
		else if (lenth == 5)
			five_num(stack_a, stack_b);
		else
			k_sort(stack_a, stack_a, lenth);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**number;
	
	number = NULL;
	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	printf(" llega aqui\n");
	if (argc < 2)
		return (0);
	while (argv[i] != NULL)
	{
		number = ft_split(argv[i], ' ');
		check_array(number, &stack_a);
		checking_lenght_range_ofnum(number, &stack_a);
		check_if_numbers(&stack_a, number);
		free_array(number);
		i++;
	}
	push_swap(&stack_a, &stack_b);
	free_the_list(&stack_a);
	return (0);
}