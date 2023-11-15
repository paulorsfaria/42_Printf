/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:44:22 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/14 14:46:58 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_findmytype(int type, va_list lst);
int		ft_putstr_fd(char *s, int fd);
int		ft_print_decimal(int nbr);
char	*ft_itoa(int n);
int		ft_strlen(const char *str);
char	*ft_itoa_unsigned(unsigned int n);
int		ft_print_unsigned(unsigned int nbr);
int		ft_print_hexadecimal(unsigned int c, char letter);
int		ft_print_ptr(unsigned long int c);
void	print_hexadecimal(unsigned long int n, char letter);
int		len_nbr(unsigned long int n, int j);

#endif
