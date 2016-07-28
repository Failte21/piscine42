/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 11:55:49 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/19 07:09:59 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		start_with_a(char *str)
{
	return(str[0] == 'a');
}


int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while(tab[i])
	{
		if (f(tab[i]))
			nb++;
		i++;
	}
	return (nb);
}

int		main()
{
	char** array;

	array = (char**)malloc(sizeof(char*) * 4 + sizeof(int));
	array[0] = "aello";
	array[1] = "ala";
	array[2] = "ollo";
	array[3] = "alo";
	array[4] = 0;

	printf("%d", ft_count_if(array, start_with_a));
}
