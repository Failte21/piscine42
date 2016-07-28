/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:29:11 by tfarrugi          #+#    #+#             */
/*   Updated: 2016/07/27 18:54:58 by tfarrugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		get_min(int a, int b, int c)
{
	if (a == 0 || b == 0 || c == 0)
		return (1);
	if (a <= b && a <= c)
		return (a + 1);
	if (b <= a && b <= c)
		return (b + 1);
	return (c + 1);
}

void	fill_array(int *t1, int *t2, int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		t2[i] = t1[i];
		i++;
	}
}

int		**create_tab(int width)
{
	int **tab;

	if (!(tab = malloc(sizeof(int*) * 2)))
		return (NULL);
	if (!(tab[0] = malloc(sizeof(int) * width)))
		return (NULL);
	if (!(tab[1] = malloc(sizeof(int) * width)))
		return (NULL);
	return (tab);
}

t_point	*init_point(void)
{
	t_point *new;

	if (!(new = malloc(sizeof(t_tab))))
		return (0);
	new->value = 0;
	new->pos = 0;
	return (new);
}

int		fill_tab(char c, t_tab *elem)
{
	if (c == elem->obstacle)
		return (0);
	return (1);
}
