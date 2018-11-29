# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etlagors <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 15:11:10 by etlagors          #+#    #+#              #
#    Updated: 2018/11/06 15:11:12 by etlagors         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -I includes -c $(SRCS)
	ar rc libft.a $(OBJ)
	ranlib libft.a

clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a

re: fclean all