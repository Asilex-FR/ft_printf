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

static int	ft_format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));	
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == '%')
	 	return (ft_putchar(va_arg(args, int)));
	else if (format == 'd' || format == 'i')
	 	return (ft_putstr(ft_itoa_base(va_arg(args, long long), "0123456789")));
	else if (format == 'x')
	 	return (ft_putstr(ft_itoa_base(va_arg(args, long long), "0123456789abcdef")));
	else if (format == 'X')
	 	return (ft_putstr(ft_itoa_base(va_arg(args, long long), "0123456789ABCDEF")));
	else if (format == 'u')
		return (ft_putstr(ft_itoa_base(va_arg(args, int), "0123456789")));
	// else if (format == 'p')
	//  	ft_print_ptr(va_arg(args, unsigned int));
	return (0);
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
			count += ft_format(str[i], args);
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

