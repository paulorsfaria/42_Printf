/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:25:44 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 15:01:42 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	char	*temp;
	size_t	size;

	if (!nbr)
		return (write(1, "0", 1));
	temp = ft_itoa_unsigned(nbr);
	ft_putstr_fd(temp, 1);
	size = ft_strlen(temp);
	free(temp);
	return (size);
}
