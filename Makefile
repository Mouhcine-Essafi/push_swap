# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: messafi <messafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 15:06:32 by messafi           #+#    #+#              #
#    Updated: 2022/08/09 17:21:25 by messafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = src/*.c push_swap.c
NAME = push_swap
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a

all : $(NAME)

$(NAME) : $(SRC)
	make -C libft
	make -C ft_printf
	$(CC) $(CFLAGS) $(LIBFT) $(FT_PRINTF) $(SRC) -o $(NAME)

clean :
	make clean -C libft
	make clean -C ft_printf

fclean : clean
	make fclean -C libft
	make fclean -C ft_printf
	rm -rf $(NAME)

re : fclean all


