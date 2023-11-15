/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:27:48 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/15 08:09:50 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
	size = len_nbr(n, 10);
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
