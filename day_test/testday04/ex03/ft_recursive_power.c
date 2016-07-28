/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 01:17:56 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/09 14:37:02 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power > 1)
	{
		power--;
		nb = nb * ft_recursive_power(nb, power);
		return (nb);
	}
	else
	{
		return (nb);
	}
}

int main()
{
	int nb;

	nb = ft_recursive_power(-6, 7);
	ft_putnbr(nb);
	return (0);
}
