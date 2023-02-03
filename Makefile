# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonier <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 22:27:42 by amonier           #+#    #+#              #
#    Updated: 2022/11/28 21:18:46 by amonier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make libft.a -C libft
	gcc -o test.exe main.c ./libft/libft.a
clean:
	make clean -C libft

fclean:
	make fclean -C libft
	

.PHONY: clean fclean all