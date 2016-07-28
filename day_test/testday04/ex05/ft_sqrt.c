/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 11:04:21 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/09 21:43:55 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	ft_sqrt(int nb)
{
	int     i;
	int     k;

	i = 0;
	while (i <= nb)
	{
		k = i * i;
		if (k == nb)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	int nb;

	nb = 2147483646;
	ft_putnbr(nb);
	ft_putchar('\n');
	nb = ft_sqrt(nb);
	ft_putnbr(nb);
	return (0);
}
