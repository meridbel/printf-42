/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:08:34 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/05 10:16:00 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	helper(const char *str, int i, va_list args, int calc)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				return (-1);
			calc = calc + handle_format(str[i], args);
		}
		else
		{
			ft_putchar(str[i]);
			calc++;
		}
		i++;
	}
	return (calc);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		calc;

	calc = 0;
	if (str == 0 || write(1, 0, 0) == -1)
		return (-1);
	i = 0;
	va_start(args, str);
	calc = helper(str, i, args, calc);
	va_end(args);
	return (calc);
}
