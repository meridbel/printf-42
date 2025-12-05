/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:44:37 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 20:46:49 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_adress(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_signed_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned_int(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_low_hexadecimal(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_uper_hexadecimal(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_print_percent());
	return (0);
}
