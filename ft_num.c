/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:32:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 00:32:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int nb, char c, int len)
{
	char			*base;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(base[nb % 16], len);
	else
	{
		ft_print_hex(nb / 16, c , len);
		ft_print_hex(nb % 16, c , len);
	}
}

void	ft_putchar(char c, int len)
{
	write(1, &c, 1);
	len++;
}

void	ft_putstr(char *str, int len)
{
	int	i;

	i = 0;
	while (str && str[i])
		ft_putchar(str[i++], len);
}

void	ft_putnbr(int n, int len)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void ft_print_ptr(unsigned int ptr, int len)
{
	unsigned int	p;

	p = ptr;
	ft_putstr("0x", len);
	ft_print_hex(p, 'x', len);	
}
