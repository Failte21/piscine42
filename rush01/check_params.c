/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 15:44:45 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/17 23:30:29 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	create_grid(char **av, int grid[9][9])
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 49 && av[i][j] <= 57)
				grid[i - 1][j] = av[i][j] - '0';
			else
				grid[i - 1][j] = 0;
			j++;
		}
		i++;
	}
}

int		check_param(int ac, char **av)
{
	int i;
	int j;
	int nb;

	i = 1;
	nb = 0;
	while (i <= 9)
	{
		if (ft_strlen(av[i]) != 9)
			return (0);
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < 49 && av[i][j] != '.') || av[i][j] > 57)
				return (0);
			if (av[i][j] >= 49 && av[i][j] <= 57)
				nb++;
			j++;
		}
		i++;
	}
	if (nb < 17)
		return (0);
	return (1);
}
