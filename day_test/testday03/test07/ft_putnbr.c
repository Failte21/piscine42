/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 12:57:08 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 14:06:53 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int size;
	int initial_nb;

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
