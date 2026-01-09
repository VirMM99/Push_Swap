/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:06:40 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 17:50:08 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_hex(unsigned int n)
{
	char			v;
	unsigned long	nb;
	int				print;
	char			*base;

	print = 0;
	nb = n;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		print += ft_hex((nb / 16));
	}
	v = base[nb % 16];
	return (print + write(1, &v, sizeof(v)));
}

int	ft_upperhex(unsigned int n)
{
	char			v;
	unsigned long	nb;
	int				print;
	char			*base;

	print = 0;
	nb = n;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		print += ft_upperhex((nb / 16));
	}
	v = base[nb % 16];
	return (print + write(1, &v, sizeof(v)));
}
