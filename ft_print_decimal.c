/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:48:25 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 15:00:59 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int nbr)
{
	char	*temp;
	size_t	size;

	if (!nbr)
		return (write(1, "0", 1));
	temp = ft_itoa(nbr);
	ft_putstr_fd(temp, 1);
	size = ft_strlen(temp);
	free(temp);
	return (size);
}
