# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: messafi <messafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 04:42:59 by messafi           #+#    #+#              #
#    Updated: 2022/06/21 13:57:54 by messafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Werror -Wextra
NAME=libftprintf.a
SRC=ft_printstr.c\
	ft_printf.c\
	ft_putnbr.c\
	ft_putnbrhexupper.c\
	ft_putnbrhexlower.c\
	ft_putchar.c\
	ft_put.c\

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f libftprintf.a
re: fclean all
