/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:21:03 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/24 20:15:35 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		check_line(char *str, int *i, char corner, char mid)
{
	int start;

	start = 0;
	while (str[*i] && str[*i] != '\n')
	{
		if ((start && (str[*i + 1] != '\n')) && str[*i] != mid)
			return (0);
		if (start < 1 && str[*i] != corner)
			return (0);
		start++;
		if ((str[*i + 1] == '\n') && (str[*i] != corner))
			return (0);
		(*i)++;
	}
	return (1);
}

int		check_line_mid(char *str, int *i, char c)
{
	while (str[*i + 1] != '\n')
	{
		if (str[*i] != c)
			return (0);
		(*i)++;
	}
	return (1);
}

int		check_corner(char *str, int *i, char corner)
{
	if (str[*i] != corner)
		return (0);
	(*i)++;
	return (1);
}

int		check_col(char *str, int *i, char c)
{
	if (str[*i] != c)
		return (0);
	(*i)++;
	return (1);
}
