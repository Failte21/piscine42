/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_spaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:07:33 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/14 21:59:46 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		word_count(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			word++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (word);
}

int word_len(char *str, int i)
{
	int size;

	size = 0;
	while(str[i] != '\n' && (str[i] != ' ' || str[i] != '\t'))
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
	int		array_len;
	int size;

	i = 0;
	j = 0;
	array_len = word_count(str);
	array = (char**)malloc(sizeof(char*) * (array_len + 1));
	while(str[i])
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
	return(array);
}

int main()
{
	char **array;
	int size;
	int i;
	char *str = "Salut les mecs";

	i = 0;
	array = ft_split_whitespaces(str);
	size = word_count(str);

	while(i < size)
	{
		printf("%s", array[i]);
		i++;
	}
	return (0);
}
