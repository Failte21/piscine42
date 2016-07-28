/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 07:44:53 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/27 18:35:01 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		fill_elem(t_tab *elem, char *str, int i, int height)
{
	int y;

	y = 0;
	while (str[i] && str[i] != '\n')
	{
		if (y > 3)
			return (0);
		i++;
		y++;
	}
	if (y != 3)
		return (0);
	elem->height = height;
	elem->empty = str[i - 3];
	elem->obstacle = str[i - 2];
	elem->full = str[i - 1];
	return (1);
}

int		ft_atoi(char *str, t_tab *elem)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		return (0);
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (!(fill_elem(elem, str, i, result)))
		return (0);
	return (result);
}
