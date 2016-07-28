/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:08:36 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/10 17:31:29 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((j == 1 || j == y) && i == 1)
				ft_putchar('A');
			else if ((j == 1 && i == x) || (j == y && i == x))
				ft_putchar('C');
			else if (j == 1 || j == y || i == 1 || i == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}
