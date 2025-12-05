/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uper_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:42:40 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 20:43:55 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uper_hexadecimal(unsigned int number)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (number >= 16)
		count = count + ft_uper_hexadecimal(number / 16);
	count = count + write(1, &base[number % 16], 1);
	return (count);
}
