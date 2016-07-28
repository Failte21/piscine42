/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 11:08:54 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 10:30:02 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
