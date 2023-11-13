/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:27:48 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 14:52:39 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long int	count_numbers(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

static char	*if_zero(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	int					size;
	char				*number;
	long unsigned int	nb;

	nb = n;
	size = count_numbers(n);
	if (!size)
		return (NULL);
	number = (char *) malloc(sizeof (char) * (size + 1));
	if (!number)
		return (NULL);
	number[size--] = '\0';
	if (nb == 0)
		return (if_zero(number));
	while (nb > 0)
	{
		number[size--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (number);
}
