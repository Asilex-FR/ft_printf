/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainthana <ainthana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:29:44 by ainthana          #+#    #+#             */
/*   Updated: 2024/12/05 14:44:41 by ainthana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;

	ptr = malloc(1);
	printf("%d\n", ft_printf("%p\n", -1));
	printf("%d\n", printf("%p\n", -1));
	free(ptr);
}
