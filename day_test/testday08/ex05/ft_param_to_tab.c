/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 17:14:07 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/16 22:35:28 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char				**ft_split_whitespaces(char *str);

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char*)malloc(sizeof(*copy) * ft_strlen(src) + 1);
	while (i < ft_strlen(src))
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			len;
	char		*copy;
	t_stock_par	*array;

	i = 0;
	array = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < (ac - 1))
	{
		len = ft_strlen(av[i]);
		array[i].size_param = len;
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		array[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (array);
}
