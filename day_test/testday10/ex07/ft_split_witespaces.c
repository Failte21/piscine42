/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvimo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 19:23:13 by vinvimo           #+#    #+#             */
/*   Updated: 2016/07/19 07:53:15 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_size(char *s)
{
	int i;

	i = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		i++;
	return (i);
}

int ft_nbword(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i++;
		j++;
		i++;
	}
	return (j);
}

char*ft_strcut(char const *s, int start, int len)
{
	char *d;
	int i;

	if (!s)
		return (NULL);
	if (!(d = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char**ft_split_whitespaces(char *str)
{
	char**d;
	int i;
	int index;

	if (!str)
		return (NULL);
	if (!(d = (char**)malloc(sizeof(char*) * (ft_nbword(str) + 1))))
		return (NULL);
	index = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			d[index] = ft_strcut(str, i, ft_size(str + i));
			index++;
			i = i + ft_size((str + i));
		}
		else
	i++;
	}
	d[index] = 0;
	return (d);
}
