/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 19:40:31 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/17 23:39:35 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

void	display(int grid[9][9]);
int		ft_strlen(char *str);
void	create_grid(char **av, int grid[9][9]);
int		check_sudoku(int grid[9][9], int position);
int		check_param(int ac, char **av);
int		is_block_ok(int nb, int grid[9][9], int i, int j);
int		is_raw_ok(int nb, int grid[9][9], int i);
int		is_col_ok(int nb, int grid[9][9], int j);
int		backtracking(int grid[9][9], int position);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
