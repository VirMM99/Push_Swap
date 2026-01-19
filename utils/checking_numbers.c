/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:26:19 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/15 10:23:56 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_the_chars(char *num)
{
	int	i;

	if (!num || num[0] == '\0')
		return (0);
	i = 0;
	if (num[i] == '+' || num[i] == '-')
		i++;
	if (num[i] == '\0')
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	checking_atoil(char *numbers)
{
	long	value;

	value = ft_atol(numbers);
	if (value > INT_MAX || value < INT_MIN)
		return (1);
	return (0);
}

void	checking_lenght_range_ofnum(char **num, t_list **stack_x)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i][0] == '\0')
		{
			i++;
			continue ;
		}
		if (checking_atoil(num[i]))
		{
			free_array(num);
			the_error("Error\n", 1, stack_x);
		}
		i++;
	}
}

void	check_array(char **num, t_list **stack_x)
{
	int	i;

	i = 0;
	while (num[i])
	{
		if (num[i][0] == '\0')
		{
			i++;
			continue ;
		}
		if (!check_the_chars(num[i]))
		{
			free_array(num);
			the_error("Error\n", 1, stack_x);
		}
		i++;
	}
}
