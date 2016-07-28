/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 20:12:45 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/13 20:15:47 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*str;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += strlen(argv[i]);
		i++;
	}
	i = 1;
	str = (char*)malloc(sizeof(*str) * (len) + 1);
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		i++;
	}
	return (str);
}
