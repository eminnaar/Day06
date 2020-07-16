# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 13:48:52 by eminnaar          #+#    #+#              #
#    Updated: 2020/07/16 13:49:11 by eminnaar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
ar rc libft.a  ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o
ranlib  libft.a
