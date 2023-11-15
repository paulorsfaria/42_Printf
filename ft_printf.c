/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:19:27 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/15 12:08:32 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	lst;

	va_start(lst, format);
	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
				j += ft_findmytype(format[i], lst);
		}
		else
			j += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(lst);
	return (j);
}

 int main (void)
 {
	int totalft = 0;
	int totalprint = 0;
	 totalprint = printf("%%d: %d, %%i: %i, "
	 "%%u: %u, %%c: %c, %%s: %s, %%%%: %%\n",
			10, 20, 30, 'A', "Hello");
	 totalft = ft_printf("%%d: %d, %%i: %i, "
	 "%%u: %u, %%c: %c, %%s: %s, %%%%: %%\n",
			 10, 20, 30, 'A', "Hello");
	 printf("ft_printf: %d\nprintf: %d\n", totalft, totalprint);

 }