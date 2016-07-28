/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 11:08:54 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/06 18:01:02 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = 47;
	while (first < '9')
	{
		second = ++first;
		while (second < '9')
		{
			third = ++second;
			while (third< '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(++third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int main()
{
	ft_print_comb();
	return(0);
}
