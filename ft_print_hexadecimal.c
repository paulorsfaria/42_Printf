/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:40:12 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 15:03:20 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr(unsigned int n)
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

static void	print_hexadecimal(unsigned int n, char letter)
{
	if (n >= 16)
	{
		print_hexadecimal(n / 16, letter);
		print_hexadecimal(n % 16, letter);
	}
	else if (n < 10)
		ft_putchar_fd((n + 48), 1);
	else
	{
		if (letter == 'a')
			ft_putchar_fd((n - 10 + 'a'), 1);
		if (letter == 'A')
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
}

int	ft_print_hexadecimal(unsigned int c, char letter)
{
	if (c == 0)
		return (write(1, "0", 1));
	else
	{
		print_hexadecimal(c, letter);
		return (len_nbr(c));
	}
}
