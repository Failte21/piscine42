/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 12:57:08 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 21:52:53 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int size;
	int initial_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	initial_nb = nb;
	size = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		size = size * 10;
	}
	nb = initial_nb;
	while (size)
	{
		ft_putchar(nb / size + 48);
		nb = nb % size;
		size /= 10;
	}
}
