/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:12:20 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/15 12:07:14 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_nbr(unsigned long int n, int j)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		counter++;
		n = n / j;
	}
	return (counter);
}

void	print_hexadecimal(unsigned long int n, char letter)
{
	if (n >= 16)
	{
		print_hexadecimal(n / 16, letter);
		print_hexadecimal(n % 16, letter);
	}
	else if (n < 10)
		ft_putchar_fd((n + '0'), 1);
	else
	{
		if (letter == 'a')
			ft_putchar_fd((n - 10 + 'a'), 1);
		if (letter == 'A')
			ft_putchar_fd((n - 10 + 'A'), 1);
	}
}
