/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:08:22 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/08 16:27:27 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 12 && nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
