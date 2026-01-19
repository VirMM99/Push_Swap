/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:31:40 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/15 10:39:32 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atol(const char *s)
{
	long	res;
	int		sign;
	int		i;
	int		digit;

	res = 0;
	sign = 1;
	i = 0;
	digit = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			sign = -1;
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = 1;
		res = res * 10 + (s[i++] - '0');
		if ((sign == 1 && res > INT_MAX)
			|| (sign == -1 && res < INT_MIN))
			return (LONG_MAX);
	}
	if (!digit)
		return (LONG_MAX);
	return (res * sign);
}
