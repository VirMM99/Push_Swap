/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:45:13 by vimirand          #+#    #+#             */
/*   Updated: 2025/11/25 17:28:34 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putnbr(int n)
{
	char	v;
	long	nb;
	int		print;

	print = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * (-1);
		print = write(1, "-", 1);
	}
	if (nb >= 10)
	{
		print += ft_putnbr((nb / 10));
	}
	v = (nb % 10) + '0';
	return (print + write(1, &v, sizeof(v)));
}

int	ft_uputnbr(unsigned int n)
{
	char			v;
	unsigned long	nb;
	int				print;

	print = 0;
	nb = n;
	if (nb >= 10)
	{
		print += ft_uputnbr((nb / 10));
	}
	v = (nb % 10) + '0';
	return (print + write(1, &v, sizeof(v)));
}
