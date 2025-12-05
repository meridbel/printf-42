/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_low_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:04:52 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 19:06:18 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_low_hexadecimal(unsigned int number)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (number >= 16)
		count = count + ft_low_hexadecimal(number / 16);
	count = count + write(1, &base[number % 16], 1);
	return (count);
}
