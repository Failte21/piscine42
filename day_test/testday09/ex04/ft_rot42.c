/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 00:06:22 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 00:06:25 by lsimon           ###   ########.fr       */
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
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			j = 0;
			while(j < (42 % 26 ))
			{
				if(str[i] == 'z')
				{
					str[i] = 'a';
					j++;
				}
				str[i] += 1;
				j++;
			}
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			j = 0;
			while(j < (42 % 26))
			{
				if(str[i] == 'Z')
				{
					str[i] = 'A';
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
	char str[] = "Salut les gars";
	printf("%s", ft_r42(str));
	return (0);
}
