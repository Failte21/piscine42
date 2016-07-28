/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:08:50 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/18 13:49:10 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		multiply(int i)
{
	return (i * 2);
}

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

int		main()
{
	int *array;
	int *new;
	int i;

	array = (int*)malloc(sizeof(int) * 9);
	new = (int*)malloc(sizeof(int) * 9);
	i = 0;
	while(i < 9)
	{
		array[i] = i;
		i++;
	}
	i = 0;
	return (0);
}
