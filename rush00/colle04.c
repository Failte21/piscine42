/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 16:38:17 by garouche          #+#    #+#             */
/*   Updated: 2016/07/10 17:04:44 by garouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int i, int j, int x, int y)
{
	if (j == 1 && i == 1)
		ft_putchar('A');
	else if (i == x && j == 1)
		ft_putchar('C');
	else if (j == y && i == 1)
		ft_putchar('C');
	else if (j == y && i == x)
		ft_putchar('A');
	else if (j == 1 || j == y || i == 1 || i == x)
		ft_putchar('B');
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
