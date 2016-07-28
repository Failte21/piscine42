/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 11:28:12 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 11:28:16 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_bouton(int i, int j, int k)
{
	if (j >= i && j <= k)
		return (j);
	else if (j < i)
		j = ft_bouton(j, i, k);
	else if (j > k)
		j = ft_bouton(i, k, j);
	return (j);
}
