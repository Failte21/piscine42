/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 09:26:22 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/27 22:34:58 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define BUFF_SIZE 8000000

# include "list.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

int			ft_atoi(char *str, t_tab *target);
void		bsq_file(int ac, char **av);
void		bsq_stdin(void);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_read_stdin();
char		*ft_read_file(char *file_name);
char		*ft_strcat(char *s1, char *s2);
int			ft_strlen(char *str);
int			is_board_valid(char *str, t_tab *elem);
int			fill_elem(t_tab *elem, char *str, int i, int height);
void		skip_first_line(char *str, int *i);
int			get_width(char *str, int i);
int			only_obstacles(char *str, int i, char obstacle);
int			forbidden_char(t_tab *elem, char *str, int i);
void		ft_check_square(char *str, t_tab *elem);
int			**create_tab(int width);
t_point		*init_point(void);
int			fill_tab(char c, t_tab *elem);
t_point		*get_square_pos(t_point *point, char *str, t_tab *elem, int i);
int			get_min(int a, int b, int c);
void		ft_swap(int *e1, int *e2);
void		fill_array(int *t1, int *t2, int width);
void		check_value(int value, t_point *point, int *i);
void		display_square(char *str, t_point *point, t_tab *elem);
int			get_error(char *str, t_tab *elem);
void		check_one(char *str, t_tab *elem);
int			ft_strlene(char *str, int i);

#endif
