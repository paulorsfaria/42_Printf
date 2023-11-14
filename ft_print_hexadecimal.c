/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:40:12 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/14 08:57:49 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(unsigned int c, char letter)
{
	if (c == 0)
		return (write(1, "0", 1));
	else
	{
		print_hexadecimal(c, letter);
		return (len_nbr(c, 16));
	}
}
