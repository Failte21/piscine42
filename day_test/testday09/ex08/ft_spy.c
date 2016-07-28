/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 13:54:13 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/15 14:42:13 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i++])
		ft_putchar(str[i]);
}

int		ft_strcmp(char *str)
{
	int i;
	char s1[] = "president";

	i = 0;
	while(str[i++] || s1[i++])
	{
		if (str[i] != s1[i])
			return(str[i] - s1[i]);
	}
	return (0);
}

char	*format_word(char *word)
{
	int i;
	int j;

	i = 0;
	while(word[i])
	{
		j = 0;
		while(word[i] != ' ' && word[i] != '\t' && word[i] != '\n')
			word[j++] = word[i++];
		i++;
	}
	word[j] = '\0';
	return(word);
}

int main(int argc, char **argv)
{
	char *current_char;
	int i;
	int len;

	i = 0;
	while(argc > 1)
	{
		argv[argc - 1] = format_word(argv[argc - 1]);
		if(ft_strcmp(argv[argc - 1]))
		{
			ft_putstr("Alert!!!");
			return (0);
		}
		argc--;
	}
}
