/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:35:25 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 20:38:36 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int number)
{
	char	str[10];
	long	n;
	int		count;
	int		i;

	i = 0;
	count = 0;
	n = number;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	count = count + i;
	i = i - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (count);
}
