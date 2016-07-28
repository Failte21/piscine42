/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:15:59 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 07:13:46 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_nbcmp(int n1, int n2)
{
	return (n1 - n2);
}

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			count ++;
		i++;
	}
	if (i == count || count == 0)
		return (1);
	return (0);
}

int main()
{
	int* array;
	int i;

	i = 0;
	array = (int*)malloc(sizeof(int) * 5);
	array[0] = -10;
	array[1] = 5;
	array[2] = 7;
	array[3] = 172;
	array[4] = 180;
	printf("%d", ft_is_sort(array, 5, &ft_nbcmp));
}
