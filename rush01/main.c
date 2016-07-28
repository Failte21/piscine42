/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:39:38 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/17 23:32:44 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int		main(int argc, char **argv)
{
	int grid[9][9];

	if (argc != 10)
		write(1, "Erreur\n", 7);
	else if (check_param(argc, argv))
	{
		create_grid(argv, grid);
		backtracking(grid, 0);
		display(grid);
	}
	else
		write(1, "Erreur\n", 7);
	return (0);
}
