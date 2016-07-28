# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 11:44:48 by lsimon            #+#    #+#              #
#    Updated: 2016/07/24 20:20:49 by lsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = main.o check00.o check01.o ft_check.o\
		ft_base.o str_cat.o ft_str.o

SRCS = main.c check00.c check01.c ft_check.c\
		ft_base.c str_cat.c ft_str.c

NAME = colle-2

FLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
