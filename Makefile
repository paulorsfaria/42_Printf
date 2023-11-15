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
############################### Compilation ####################################
CFLAGS = -Wall -Wextra -Werror
CC = cc
###############################    Files    ####################################
SRCS = 	ft_printf.c ft_findmytype.c ft_printf_utils.c ft_print_ptr.c \
		ft_print_decimal.c  ft_print_unsigned.c ft_print_hexadecimal.c \
		libft/ft_itoa.c libft/ft_itoa_unsigned.c libft/ft_strlen.c \
		libft/ft_putchar_fd.c libft/ft_putstr_fd.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
