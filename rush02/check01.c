/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 13:53:08 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/24 20:15:06 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		check01(char *str, int *i, int *j, int *h)
{
	if (str[*i] == '\n')
	{
		(*j)++;
		(*i)++;
	}
	if (!(str[*i]))
		return (1);
	if (*j == 1 && *i == 0)
		return (str[*i] == '/');
	else if (str[*i + 1] == '\n' && *j == 1)
		return (str[*i] == '\\');
	else if (*j == *h && str[*i - 1] == '\n')
		return (str[*i] == '\\');
	else if (*j == *h && str[*i + 1] == '\n')
		return (str[*i] == '/');
	else if (*j == 1 || *j == *h || str[*i - 1] == '\n' || str[*i + 1] == '\n')
		return (str[*i] == '*');
	else
		return (str[*i] == ' ');
	return (0);
}

int		is_colle01(char *str, int h)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (!(check01(str, &i, &j, &h)))
			return (0);
		if (str[i])
			i++;
	}
	return (1);
}

int		check04(char *str, int *i, int *j, int *h)
{
	if (str[*i] == '\n')
	{
		(*j)++;
		(*i)++;
	}
	if (!(str[*i]))
		return (1);
	if (*j == 1 && *i == 0)
		return (str[*i] == 'A');
	else if (str[*i + 1] == '\n' && *j == 1)
		return (str[*i] == 'C');
	else if (*j == *h && str[*i - 1] == '\n')
		return (str[*i] == 'C');
	else if (*j == *h && str[*i + 1] == '\n')
		return (str[*i] == 'A');
	else if (*j == 1 || *j == *h || str[*i - 1] == '\n' || str[*i + 1] == '\n')
		return (str[*i] == 'B');
	else
		return (str[*i] == ' ');
	return (0);
}

int		is_colle04(char *str, int h)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (!(check04(str, &i, &j, &h)))
			return (0);
		if (str[i])
			i++;
	}
	return (1);
}
