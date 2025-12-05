/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:00:36 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 19:01:55 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_helper(unsigned long number)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (number >= 16)
		count = count + ft_helper(number / 16);
	count = count + write(1, &base[number % 16], 1);
	return (count);
}

int	ft_adress(void *ptr)
{
	unsigned long	number;
	int				count;

	number = (unsigned long)ptr;
	count = 2;
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count = count + ft_helper(number);
	return (count);
}
