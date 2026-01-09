/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:15:33 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 17:50:53 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_this(char const *format, int count, va_list args)
{
	if (*format == '%')
		count += ft_putchar('%');
	else if (*format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		count += ft_putptr(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		count += ft_uputnbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		count += ft_hex(va_arg(args, unsigned int));
	else if (*format == 'X')
		count += ft_upperhex(va_arg(args, unsigned int));
	else
	{
		count += ft_putchar('%');
		count += write(1, format, 1);
	}
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) != '\0'))
		{
			format++;
			count = get_this(format, count, args);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
