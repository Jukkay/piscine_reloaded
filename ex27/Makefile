# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 12:54:17 by jylimaul          #+#    #+#              #
#    Updated: 2021/10/30 13:06:21 by jylimaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file
SRCS=./srcs/main.c ./srcs/ft_display_file.c

INCLUDES=./includes

.PHONY: all clean fclean re 

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -o $(NAME) $(SRCS)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
