/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 20:16:03 by exam              #+#    #+#             */
/*   Updated: 2016/07/22 21:11:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_len(char *str, int i)
{
	int l;

	l = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		l++;
		i++;
	}
	return (l);
}

int		word_count(char *str)
{
	int i;
	int w;

	w = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i])
		{
			w++;
			while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
				i++;
		}
	}
	return (w);
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **tab;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char*) * word_count(str) + 1)) == NULL)
		return (NULL);
	while (str[i])
	{
		k = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i])
		{
			if ((tab[j] = malloc(sizeof(char) * word_len(str, i) + 1)) == NULL)
				return (NULL);
		}
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
