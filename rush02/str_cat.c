/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 19:31:24 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/24 18:57:41 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_cat(char *s1, char c1)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + 2));
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = c1;
	new[i + 1] = '\0';
	return (new);
}
