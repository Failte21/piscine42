/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:52:59 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 00:07:59 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_r42(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			j = 0;
			while (j < (42 % 26))
			{
				if (str[i] == 'z' || str[i] == 'Z')
				{
					str[i] -= 25;
					j++;
				}
				str[i] += 1;
				j++;
			}
		}
		i++;
	}
	return(str);
}

int main()
{
	printf("%s", ft_r42("Salut les gars"));
	return (0);
}
