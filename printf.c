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

#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	int	count;
	int	i;
	

	count = 0;
	i = 0;

	while (*format)
	{ //mettre dans une fonction
		if (format[i++] == "%c")
			ft_putchar;
			count++;
		else if (format[i++] == "%d")
			ft_putnbr;
			count++;
		else if (format[i++] == "%i")
			ft_putnbr;
			count++;
		else if (format[i++] == "%%")
			ft_putchar;
			count++;
		else if (format[i++] == "%x")
			count++;
		else if (format[i++] == "%X")
			count++;	
		else
		{
			count++;
		}
	}
	va_end(args);
	return (count);
}