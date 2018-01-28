# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmncube <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 09:33:21 by lmncube           #+#    #+#              #
#    Updated: 2018/01/23 17:45:11 by lmncube          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): 
	gcc $(FLAGS) -c $(SRC) -I $(HEADER)  
	ar rc $(NAME) $(OBJECTS)
clean: 
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
