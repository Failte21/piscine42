/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarrugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:41:31 by tfarrugi          #+#    #+#             */
/*   Updated: 2016/07/27 21:44:04 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	skip_first_line(char *str, int *i)
{
	while (str[*i] && str[*i] != '\n')
		(*i)++;
	(*i)++;
}

int		get_width(char *str, int i)
{
	int y;

	y = 0;
	while (str[i] != '\n')
	{
		i++;
		y++;
	}
	return (y);
}

int		forbidden_char(t_tab *elem, char *str, int i)
{
	if (str[i - 1] == '\n' && str[i] == '\n')
		return (0);
	if (str[i] != '\n' && str[i] != elem->empty && str[i] != elem->obstacle)
		return (0);
	if (str[i] != '\n' && str[i + 1] == '\0')
		return (0);
	return (1);
}

int		is_board_valid(char *str, t_tab *elem)
{
	int		i;
	int		j;
	int		y;

	y = 0;
	skip_first_line(str, &i);
	j = i;
	elem->width = get_width(str, i);
	while (str[i])
	{
		if (!forbidden_char(elem, str, i))
			return (0);
		if (str[i] == '\n')
		{
			j += elem->width;
			y++;
			if (i != j++)
				return (0);
		}
		i++;
	}
	return (y == elem->height || i == 7);
}
