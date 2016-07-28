/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 17:15:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 23:38:12 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int size;
	int i;

	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	while (size - i != i)
	{
		str[size + i] = str[i];
		i++;
	}
	return (str);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char *str = "hello";

	ft_putstr(str);
	str = ft_strrev(str);
	ft_putstr(str);
	return(0);
}
