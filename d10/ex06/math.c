/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:49:01 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/18 18:34:34 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int		sum(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	write(1, "\n", 1);
	return (1);
}

int		sub(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	write(1, "\n", 1);
	return (1);
}

int		multiply(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	write(1, "\n", 1);
	return (1);
}

int		divide(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		write(1, "\n", 1);
		return (0);
	}
	ft_putnbr(n1 / n2);
	write(1, "\n", 1);
	return (1);
}

int		mod(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		write(1, "\n", 1);
		return (0);
	}
	ft_putnbr(n1 % n2);
	write(1, "\n", 1);
	return (1);
}
