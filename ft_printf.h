/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meridbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:50:48 by meridbel          #+#    #+#             */
/*   Updated: 2025/12/03 20:54:33 by meridbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_low_hexadecimal(unsigned int number);
int	ft_uper_hexadecimal(unsigned int number);
int	ft_print_signed_int(int num);
int	ft_print_unsigned_int(unsigned int number);
int	ft_adress(void *ptr);
int	ft_print_percent(void);
int	handle_format(char format, va_list args);

#endif
