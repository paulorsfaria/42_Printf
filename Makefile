# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 16:15:03 by paulo-do          #+#    #+#              #
#    Updated: 2023/11/13 15:10:27 by paulo-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc

SRCS = 	ft_printf.c ft_findmytype.c ft_printf_utils.c ft_itoa.c\
		ft_print_decimal.c ft_itoa_unsigned.c ft_print_unsigned.c\
		ft_print_hexadecimal.c ft_print_ptr.c



OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
