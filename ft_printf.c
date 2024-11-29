/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 00:53:28 by marvin            #+#    #+#             */
/*   Updated: 2024/11/28 00:53:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char format, va_list args, int	len)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, char), len);	
	else if (format == 's')
		count += ft_putstr(va_arg(args, char), len);
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, unsigned int), len);
	else if (format == 'x')
		count += ft_print_hex(va_arg(args, unsigned int), len);
	else if (format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), len);
	else if (format == '%')
		count += ft_putchar(va_arg(args, char), len);
	else if (format == 'p')
		count += ft_print_ptr(va_arg(args, unsigned int), len);
	return (count);
}


int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_format(str, args, count)
		}
	}
	va_end(args);
	return (count);
}