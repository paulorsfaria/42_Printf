/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:19:27 by paulo-do          #+#    #+#             */
/*   Updated: 2023/11/13 14:55:18 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		j;
	va_list	not_sure;

	va_start(not_sure, input);
	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			if (input[i] != '\0')
			{
				j += ft_findmytype(input[i], not_sure);
			}
		}
		else
			j += ft_putchar_fd(input[i], 1);
		i++;
	}
	va_end(not_sure);
	return (j);
}

// int main (void)
// {
// 	//int c;
// 	//c = 123456789;
// 	//s = "o pato";
// //	ft_printf("%%someth%cing isn't wrong with %s but we never know how 
//ab%cout we call the cops to find out? %c\n",c ,s,c, c);
// //	printf("%%something isn't wrong with %s but we never know how about 
//we call the cops to find out? %c\n", s, c);
// //	ft_printf("%i\n", c);
// //	printf("%i\n", c);
//
// //	ft_printf("%d\n", c);
// 	//const char *s;
//
//
// const char *d;
// 	const char *w;
// 	const char *f;
// 	const char *g;
// 	const char *h;
// 	const char *j;
// 	const char *k;
// 	const char *l;
// 	const char *p;
// 	const char *o;
// 	const char *y;
// 	const char *t;
// 	const char *e;
//
// 	d ="⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀ ⣀⣀⣤⣤⣤⣀⡀";
// 	w = "⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀";
// 	f = "⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆";
// 	g = "⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆";
// 	h = "⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆";
// 	j = "⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠸⣼⡿";
// 	k = "⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉";
// 	l = "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇";
// 	p = "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇";
// 	o = "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇";
// 	y = "⠀⠀ ⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠇";
// 	t = "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇";
// 	e = "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃";
// 	ft_printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n
//%s\n%s\n%s\n%s\n%s\n", d, w,f, g,h,j,k,l,p,o,y,t,e);
//
//
// //	printf("%d\n", c);
//
// //unsigned int uuu = 00010001;
// //	ft_printf("%u\n",uuu);
// //	printf("%u\n",uuu);
// }