/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarrugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 17:32:08 by tfarrugi          #+#    #+#             */
/*   Updated: 2016/07/27 21:56:24 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"
#include "../includes/list.h"

void	display_square(char *str, t_point *point, t_tab *elem)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < point->value)
	{
		x = 0;
		while (x < point->value)
		{
			str[(point->pos) - x - ((elem->width + 1) * y)] = elem->full;
			x++;
		}
		y++;
	}
}

t_point	*get_square_pos(t_point *point, char *str, t_tab *elem, int i)
{
	int x;
	int y;
	int **tab;

	y = 0;
	tab = create_tab(elem->width);
	while (y++ < elem->height)
	{
		x = 0;
		while (x++ < elem->width)
		{
			if (x == 0 || y == 0)
				tab[0][x] = fill_tab(str[i], elem);
			else if (str[i] != elem->obstacle)
				tab[0][x] = get_min(tab[1][x - 1], tab[0][x - 1], tab[0][x]);
			else
				tab[0][x] = 0;
			check_value(tab[0][x], point, &i);
		}
		fill_array(tab[0], tab[1], elem->width);
		i++;
	}
	return (point);
}

void	check_value(int value, t_point *point, int *i)
{
	if (value > point->value)
	{
		point->value = value;
		point->pos = *i;
	}
	(*i)++;
}

void	ft_check_square(char *str, t_tab *elem)
{
	int		i;
	t_point	*point;

	point = init_point();
	i = 0;
	skip_first_line(str, &i);
	point = get_square_pos(point, str, elem, i);
	display_square(str, point, elem);
}
