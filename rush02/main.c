/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 18:54:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/28 13:46:23 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		main(void)
{
	char	*str;
	int		height;
	int		width;

	str = get_str();
	height = get_height(str);
	width = get_width(str);
	if (!width || !height)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	if (!(get_colles(str, height, width)))
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
