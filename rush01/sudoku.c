/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:06:37 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/17 23:40:02 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

void	display(int grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(grid[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		is_raw_ok(int nb, int grid[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[i][j] == nb)
			return (0);
		j++;
	}
	return (1);
}

int		is_col_ok(int nb, int grid[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][j] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		is_block_ok(int nb, int grid[9][9], int i, int j)
{
	int mod_i;
	int mod_j;

	mod_i = i - i % 3;
	mod_j = j - j % 3;
	i = mod_i;
	while (i < mod_i + 3)
	{
		j = mod_j;
		while (j < mod_j + 3)
		{
			if (grid[i][j] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		backtracking(int grid[9][9], int position)
{
	int i;
	int j;
	int nb;

	nb = 1;
	if (position == (9 * 9))
		return (1);
	i = position / 9;
	j = position % 9;
	if (grid[i][j] != 0)
		return (backtracking(grid, position + 1));
	nb = 1;
	while (nb <= 9)
	{
		if (is_raw_ok(nb, grid, i) && is_col_ok(nb, grid, j)
			&& is_block_ok(nb, grid, i, j))
		{
			grid[i][j] = nb;
			if (backtracking(grid, position + 1))
				return (1);
		}
		nb++;
	}
	grid[i][j] = 0;
	return (0);
}
