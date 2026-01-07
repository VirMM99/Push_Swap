/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:26:19 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/05 16:09:51 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" //check_num_array.c

int	check_biggie_num(char *numbers)
{
	int	i;
	int	the_counting;
	
	i = 0;
	the_counting = 0;
	while (numbers[i] == '-' || numbers[i] == '+')
		i++;
	while (numbers[i] == '0')
		i++;
	while (numbers[i])
	{
		i++;
		the_counting++;
	}
	if (the_counting >= 11)
		return (1);
	return (0);
}
int	checking_atoil(char *numbers)
{
	if (check_biggie_num(numbers))
		return (1);
	else if(ft_atoi(numbers) != ft_atol(numbers))
		return (1);
	return (0);
}
void	checking_lenght_range_ofnum(char **num, t_list **stack_x)
{
	int	i;
	
	i = 0;
	while (num[i] != NULL)
	{
		if (num[i] == NULL || *num[i] == '\0')
		{
			free_array(num);
			the_error("Error\n", 1, stack_x); //Tiene la cadena vacía. Mirar funcion de free y la de error)
		}
		if (checking_atol(num[i]))
		{
			free_array(num);
			the_error("Error\n", 1, stack_x); //Num fuera de rango.Mirar funcion de free y la de error)
		}
		i++;
	}
}

int	check_the_chars(char *num)
{
	int	i;
	
	i = 1;
	if (ft_isdigit(num[0]))
	{
		if (num[i] == '\0')
			return (0);
		while (ft_isdigit(num[i]) || num[i] == '\0')
		{
			if (num[i] == '\0')
				return (1);
			i++;
		}
	}
	return (0);
}

void	check_array(char **num, t_list **stack_x)
{
	int	i;
	
	i = 0;
	while (num[i] != NULL)
	{
		if (!(check_the_chars(num[i])))
		{
			free_array(num);
			the_error("Error\n", 1, stack_x); //Num no vale
		}
		else
			i++;
	}
}

