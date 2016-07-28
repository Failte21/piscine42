/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:01:14 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/11 16:23:04 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);


int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (s1[n] == s2[n])
		return (0);
	else if (s1[n] < s2[n])
		return (-1);
	else
		return (1);
}

int main()
{
	ft_putnbr(ft_strncmp("ayc", "zyx", 1));
	return (0);
}
