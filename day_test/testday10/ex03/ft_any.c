/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:36:40 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/20 12:00:41 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		start_with_a(char *str)
{
	return(str[0] == 'a');
}


int		ft_any(char		**tab, int (*f)(char*))
{
	int i;

	i = 0;
	while(tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int		main()
{
	char** array;

	array = (char**)malloc(sizeof(char*) * 4 + sizeof(int));
	array[0] = "aello";
	array[1] = "ola";
	array[2] = "ollo";
	array[3] = "ilo";
	array[4] = 0;

	printf("%d", ft_any(array, start_with_a));
}
