/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:43:38 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/14 08:36:10 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long int c)
{
	if (!c)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	print_hexadecimal(c, 'a');
	return (len_nbr(c, 16) + 2);
}
