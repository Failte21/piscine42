/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 15:44:55 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/13 18:00:02 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (max - min));
	while (i + min < max)
	{
		array[i] = i + min;
		i++;
	}
	return (array);
}
