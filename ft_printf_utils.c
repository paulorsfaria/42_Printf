/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:12:20 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 15:10:08 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
			ft_putchar_fd(s[i++], fd);
		return (i);
	}
	else
		return (write (1, "(null)", 6));
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
