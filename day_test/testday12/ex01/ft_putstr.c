/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 23:17:17 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/21 11:38:23 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str, void (*f)(char))
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		f(str[i]);
		i++;
	}
}
