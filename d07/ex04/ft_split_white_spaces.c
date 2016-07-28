/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_spaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:07:33 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/14 22:20:31 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			word++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (word);
}

int		word_len(char *str, int i)
{
	int size;

	size = 0;
	while (str[i] != '\n' && (str[i] != ' ' || str[i] != '\t'))
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**array;
	int		size;

	i = 0;
	j = 0;
	array = (char**)malloc((sizeof(char*)) * (word_count(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = 0;
			size = word_len(str, i);
			array[j] = (char*)malloc(sizeof(char) * (size + 1));
			while (k < size)
				array[j][k++] = str[i++];
			array[j++][k] = '\0';
		}
		i++;
	}
	array[j] = 0;
	return (array);
}
