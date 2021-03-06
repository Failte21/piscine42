/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 12:47:57 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 15:58:17 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base % 2)
		return (ft_collatz_conjecture(base * 3 + 1) + 1);
	else
		return (ft_collatz_conjecture(base / 2) + 1);
}

int				main()
{
	unsigned int i = 12;
	printf("%d", ft_collatz_conjecture(i));
	return(0);
}
