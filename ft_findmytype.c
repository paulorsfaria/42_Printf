/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findmytype.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:42:57 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 14:56:21 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_findmytype(int type, va_list lst)
{
	if ('c' == type)
		return (ft_putchar_fd(va_arg(lst, int), 1));
	else if ('s' == type)
		return (ft_putstr_fd(va_arg(lst, char *), 1));
	else if ('p' == type)
		return (ft_print_ptr(va_arg(lst, unsigned long int)));
	else if ('d' == type)
		return (ft_print_decimal(va_arg(lst, int )));
	else if ('i' == type)
		return (ft_print_decimal(va_arg(lst, int )));
	else if ('u' == type)
		return (ft_print_unsigned(va_arg(lst, unsigned int)));
	else if ('x' == type)
		return (ft_print_hexadecimal(va_arg(lst, unsigned int), 'a'));
	else if ('X' == type)
		return (ft_print_hexadecimal(va_arg(lst, unsigned int), 'A'));
	else if ('%' == type)
		return (ft_putchar_fd('%', 1));
	return (0);
}
