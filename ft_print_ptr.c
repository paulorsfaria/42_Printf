/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:43:38 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 14:59:55 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr(unsigned long int n)
{
	int	counter;

	counter = 0;
	while (n)
	{
		counter++;
		n = n / 16;
	}
	return (counter);
}

static void	print_hexadecimal(unsigned long int n)
{
	if (n >= 16)
	{
		print_hexadecimal(n / 16);
		print_hexadecimal(n % 16); 
	}
	else 
	{
		if (n < 10)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long int c)
{
	if (!c)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	print_hexadecimal(c);
	return (len_nbr(c) + 2);
}
