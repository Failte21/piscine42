# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/20 14:29:22 by lsimon            #+#    #+#              #
#    Updated: 2016/07/21 22:44:59 by lsimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = main.c ft_putstr.c

OBJS = main.o ft_putstr.o

FLAGS = -Wall -Wextra -Werror


$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
