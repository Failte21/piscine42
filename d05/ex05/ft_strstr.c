/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 07:51:30 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 20:20:39 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (tofind[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == tofind[j])
		{
			while (str[i + j] == tofind[j])
				j++;
			if (tofind[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
