/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:08:22 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/08 16:20:33 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnbr(int nb);

int ft_iterative_factorial(int nb)
{
	int init_nb;
	int i;

	i = 3;
	init_nb = nb;
	if  ( nb <= 12 && nb > 1)
	{
		nb = 2;
		while(i <= init_nb)
		{
			nb = nb * i;
			i++;
		}
		return (nb);
	}
	else if( nb < 0 )
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int nb;

	nb = 13;
	ft_putnbr(nb);
	ft_putchar(' ');
	nb = ft_iterative_factorial(nb);
	ft_putnbr(nb);
	return (0);
}
