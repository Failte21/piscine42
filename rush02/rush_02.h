/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:51:13 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/24 18:48:08 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# define BUFF_SIZE 1

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	char			data;
}				t_list;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
char			*str_cat(char *s1, char c1);
char			*get_str(void);
int				get_height(char *str);
int				get_width(char *str);
void			ft_putnbr(int nbr);
int				is_colle00(char *str, int h);
int				is_colle01(char *str, int h);
int				is_colle02(char *str, int h);
int				is_colle03(char *str, int h);
int				is_colle04(char *str, int h);
int				check01(char *str, int *i, int *j, int *h);
int				check03(char *str, int *i, int *j, int *h);
int				check04(char *str, int *i, int *j, int *h);
int				check_line(char *str, int *i, char first, char mid);
int				check_col(char *str, int *i, char c);
int				check_corner(char *str, int *i, char corner);
int				check_line_mid(char *str, int *i, char c);
void			display(char *str, int width, int height, int start);
int				get_colles(char *str, int height, int width);
int				get_colles02(char *str, int height, int width, int start);

#endif
