/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 09:37:03 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/27 20:53:13 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	bsq_file(int ac, char **av)
{
	char	*str;
	int		i;
	t_tab	*elem;

	if (!(elem = malloc(sizeof(elem))))
		exit(1);
	i = 1;
	while (i < ac)
	{
		if ((str = ft_read_file(av[i])))
		{
			if (get_error(str, elem))
			{
				if (elem->height == 1)
					check_one(str, elem);
				else
					ft_check_square(str, elem);
				ft_putstr(str);
			}
		}
		else
			write(2, "map error\n", 10);
		i++;
	}
}

void	check_one(char *str, t_tab *elem)
{
	int i;

	i = 0;
	skip_first_line(str, &i);
	while (str[i] != '\n')
	{
		if (str[i] == elem->empty)
		{
			str[i] = elem->full;
			return ;
		}
		i++;
	}
}

void	bsq_stdin(void)
{
	char	*str;
	t_tab	*elem;

	if (!(elem = malloc(sizeof(elem))))
		exit(0);
	if (!(str = ft_read_stdin()))
		return ;
	if (get_error(str, elem))
	{
		ft_check_square(str, elem);
		ft_putstr(str);
	}
	exit(0);
}

int		get_error(char *str, t_tab *elem)
{
	if (!ft_atoi(str, elem))
	{
		write(2, "map error\n", 10);
		return (0);
	}
	else if (!is_board_valid(str, elem))
	{
		write(2, "map error\n", 10);
		return (0);
	}
	return (1);
}
