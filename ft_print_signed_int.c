/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:24:40 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 20:34:54 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	completed_function(long n, char *str, int i, int count)
{
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

int	ft_print_signed_int(int num)
{
	char	str[10];
	long	n;
	int		count;
	int		i;

	i = 0;
	n = num;
	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		count = 1;
	}
	return (completed_function(n, str, i, count));
}
