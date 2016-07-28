/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 08:17:43 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 12:38:45 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ultimator.h"

void	ft_destroy(char	***factory)
{
	int i;
	int j;
	int k;

	i = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
