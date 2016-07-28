/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 08:54:33 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/28 14:03:49 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		is_colle00(char *str, int h)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (j == 1)
			if (!(check_line(str, &i, 'o', '-')))
				return (0);
		if (j == h)
			if (!(check_line(str, &i, 'o', '-')))
				return (0);
		if (((str[i - 1] == '\n') || (str[i + 1] == '\n')))
			if (!(check_col(str, &i, '|')))
				return (0);
		if (str[i] && str[i] != '\n' && str[i] != ' ')
			return (0);
		if (str[i] == '\n')
			j++;
		i++;
	}
	return (1);
}

int		is_colle02(char *str, int h)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (j == 1)
			if (!(check_line(str, &i, 'A', 'B')))
				return (0);
		if (j == h)
			if (!(check_line(str, &i, 'C', 'B')))
				return (0);
		if (((str[i - 1] == '\n') || (str[i + 1] == '\n')))
			if (!(check_col(str, &i, 'B')))
				return (0);
		if (str[i] && str[i] != '\n' && str[i] != ' ')
			return (0);
		if (str[i] == '\n')
			j++;
		i++;
	}
	return (1);
}

int		check03(char *str, int *i, int *j, int *h)
{
	if (str[*i] == '\n')
	{
		(*i)++;
		(*j)++;
	}
	if (!(str[*i]))
		return (1);
	if (*j == 1 && *i == 0)
		return (str[*i] == 'A');
	else if (str[*i + 1] == '\n' && *j == 1)
		return (str[*i] == 'C');
	else if ((*j == *h && str[*i - 1] == '\n'))
		return (str[*i] == 'A');
	else if (*j == *h && str[*i + 1] == '\n')
		return (str[*i] == 'C');
	else if (*j == 1 || *j == *h || str[*i - 1] == '\n' || str[*i + 1] == '\n')
		return (str[*i] == 'B');
	else
		return (str[*i] == ' ');
	return (1);
}

int		is_colle03(char *str, int h)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (!(check03(str, &i, &j, &h)))
			return (0);
		if (str[i])
			i++;
	}
	return (1);
}
