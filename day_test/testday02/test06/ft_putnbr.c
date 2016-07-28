/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 12:57:08 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 21:51:50 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int size;
	int initial_nb;

	size = 1;
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	initial_nb = nb;
	while (nb > 9)
	{
		nb = nb / 10;
		size = size * 10;
	}
	nb = initial_nb;
	while(size)
	{
		ft_putchar(nb / size  + 48);
		nb = nb % size;
		size /= 10;
	}
}

int main()
{
	ft_putnbr(4238);
	return(0);
}
