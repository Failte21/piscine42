/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:08:50 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 07:04:15 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int i;

	i = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
