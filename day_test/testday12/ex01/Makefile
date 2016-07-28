# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/20 14:29:22 by lsimon            #+#    #+#              #
#    Updated: 2016/07/20 18:08:51 by lsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRCS = main.c ft_putstr.c
OBJS = main.o ft_putstr.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	gcc -o $(NAME) $(FLAGS) $(OBJS)

$(NAME):
	gcc -c $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
