/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 11:08:54 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/06 22:07:57 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void)
{
	int nb[3];

	nb[0] = 48;
	nb[1] = 0;
	nb[2] = 0;
	while (nb[0] <= '7')
	{
		nb[1] = nb[0] + 1;
		while (nb[1] <= '8')
		{
			nb[2] = nb[1] + 1;
			while (nb[2] <= '9')
			{
				ft_putchar(nb[0]);
				ft_putchar(nb[1]);
				ft_putchar(nb[2]);
				if(nb[0] != '7' || nb[1] != '8' || nb[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
					nb[2]++;
			}
			nb[1]++;
		}
		nb[0]++;
	}
}

int main()
{
	ft_print_comb();
	return(0);
}
