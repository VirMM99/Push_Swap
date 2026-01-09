/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:20:26 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 17:51:01 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	put_ptr(unsigned long n)
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
		print += put_ptr((nb / 16));
	}
	v = base[nb % 16];
	return (print + write(1, &v, sizeof(v)));
}

int	ft_putptr(unsigned long n)
{
	int	x;
	int	ptr;

	if (!n)
		return (write(1, "(nil)", 5));
	x = write(1, "0x", 2);
	ptr = put_ptr(n);
	return (x + ptr);
}
