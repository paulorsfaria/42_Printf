/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:18:11 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 09:43:34 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long int	count_numbers(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		counter++;
	}
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

char	*ft_itoa(int n)
{
	int			size;
	char		*number;
	long int	nb;

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
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		number[size--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (number);
}
