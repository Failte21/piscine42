/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 13:04:26 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/10 17:30:40 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int i, int j, int x, int y)
{
	if (j == 1 && i == 1)
		ft_putchar('/');
	else if (i == x && j == 1)
		ft_putchar('\\');
	else if (j == y && i == 1)
		ft_putchar('\\');
	else if (j == y && i == x)
		ft_putchar('/');
	else if (j == 1 || j == y || i == 1 || i == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

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
			display(i, j, x, y);
			i++;
		}
		i = 1;
		j++;
		ft_putchar('\n');
	}
}
