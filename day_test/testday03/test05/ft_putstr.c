/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 17:15:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 18:32:18 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnbr(int n);

void	ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	char *hello;

	hello = "hello";
	ft_putstr(hello);
	return(0);
}

