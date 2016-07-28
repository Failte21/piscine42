/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:08:22 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/08 16:18:42 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnbr(int nb);

int ft_recursive_factorial(int nb)
{

	if  ( nb <= 12 && nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if( nb < 0 )
	{
		return 0;
	}
	else if (nb == 0 || nb == 1)
	{
		return 1;
	}
	else
	{
		return (0);
	}
}

int main()
{
	int nb;

	nb = 12;
	ft_putnbr(nb);
	ft_putchar(' ');
	nb = ft_recursive_factorial(nb);
	ft_putnbr(nb);
	return (0);
}
