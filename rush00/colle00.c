/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 12:30:19 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/10 17:30:20 by lsimon           ###   ########.fr       */
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
			if ((j == 1 || j == y) && (i == 1 || i == x))
				ft_putchar('o');
			else if (i == 1 || i == x)
				ft_putchar('|');
			else if (j == 1 || j == y || i == 1 || i == x)
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}
