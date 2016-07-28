/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:30:44 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/14 22:30:46 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	while (i + min < max)
	{
		array[i] = i + min;
		i++;
	}
	*range = array;
	return (range);
}
