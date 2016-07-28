/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 06:54:00 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/18 19:59:44 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		word_count(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		words++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (words);
}

int		words_len(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] && ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n')))
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	array = (char**)malloc(sizeof(char**) * (word_count(str)) + 1);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
		{
			k = 0;
			array[j] = (char*)malloc(sizeof(char) * words_len(str, i) + 1);
			while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				array[j][k++] = str[i++];
			array[j++][k] = '\0';
		}
		i++;
	}
	array[j - 1] = NULL;
	return (array);
}

int main()
{
	int i;
	char **array;

	i = 0;
	array = ft_split_whitespaces(" Salut les me   \n\n c\n");
	while(array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}
