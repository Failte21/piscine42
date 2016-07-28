/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 17:15:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 18:45:39 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnbr(int n);

int	ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main()
{
	char *hello;
	int strlen;

	strlen = 0;
	hello = "hello";
	strlen = ft_strlen(hello);
	ft_putnbr(strlen);
	return(0);
}

