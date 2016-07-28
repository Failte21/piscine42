/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:05:04 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/09 21:50:58 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);
void ft_putchar(char c);

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= nb)
	{
	if (nb % i == 0)
		j++;
		i++;
	}
	if (j == 2)
		return (1);
	return (0);
}

int main()
{
	int nb;

	nb = 2147483647;
	ft_putnbr(nb);
	ft_putchar('\n');
	nb = ft_is_prime(nb);
	ft_putnbr(nb);
	return (0);
}
