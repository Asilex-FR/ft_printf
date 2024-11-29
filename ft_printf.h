/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:44:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 00:44:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);

void	ft_print_hex(unsigned int nb, char c, int len);
void	ft_putchar(char c, int len);
void	ft_putstr(char *str, int len);
void	ft_putnbr(int n, int len);
void ft_print_ptr(unsigned int ptr, int len);

#endif