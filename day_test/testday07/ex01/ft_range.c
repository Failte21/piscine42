/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:45:50 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/13 15:39:11 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*array;
	int		i;

	i = 0;
	if (min > max)
		return (NULL);
	array = (int*)malloc(sizeof(*array) * (max - min));
	while (i + min < max)
	{
		array[i] = i + min;
		i++;
	}
	return (array);
}

int		main()
{
	int *array;
	int min;
	int max;
	int i;

	i = 0;
	min = -15;
	max = 10;
	array = ft_range(min, max);
	while (i + min < max)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}
