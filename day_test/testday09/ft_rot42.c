/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:52:59 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/14 23:01:31 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_r42(char *str)
{
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
		{
			while(i < 42)
			{
				if(str[i] == 'z')
					str[i] = 'a';
				str[i] += 1;
			}
		}
		if ((str[i] >= 'A' && str[i] <= 'Z')
		{
			while(i < 42)
			{
				if(str[i] == 'Z')
					str[i] = 'A';
				str[i] += 1;
			}
		}
		(str[i] >= 'A' && str[i] <= 'Z'))
	}
}

