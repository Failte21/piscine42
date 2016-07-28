/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 11:08:54 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 20:06:12 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i <= 99)
	{
		j = i + 1;
		while(j <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			if(i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
				j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	return(0);
}
