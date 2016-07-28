/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:05:04 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/09 21:56:57 by lsimon           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

int main()
{
	int nb;

	nb = 1221;
	ft_putnbr(nb);
	ft_putchar('\n');
	nb = ft_find_next_prime(nb);
	ft_putnbr(nb);
	return (0);
}
