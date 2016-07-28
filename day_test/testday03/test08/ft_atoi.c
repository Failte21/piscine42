/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 07:44:53 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/11 09:00:41 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int		ft_atoi(char *str)
{
	int i;
	int is_neg;
	int result;

	result = 0;
	i = 0;
	is_neg = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '+')
	{
		i++;
	}
	if (str[i] == '-')
	{
		is_neg = 1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (is_neg == 1)
		result *= -1;
	return (result);
}

int		main()
{
	char str[] = "   123";
	ft_putnbr(atoi(str));
	ft_putchar('\n');
	ft_putnbr(ft_atoi(str));
	return (0);
}
