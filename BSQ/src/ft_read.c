/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 09:47:31 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/27 21:55:48 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_strcat(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!(new = malloc(sizeof(char) * (ft_strlen(s1) + BUFF_SIZE + 1))))
		return (0);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	free(s1);
	return (new);
}

char	*ft_read_stdin(void)
{
	char	buff[BUFF_SIZE + 1];
	char	*str;
	int		start;
	int		r;

	start = 0;
	if (!(str = malloc(sizeof(char) * 2)))
		exit(0);
	while ((r = read(0, buff, BUFF_SIZE)))
	{
		buff[r] = '\0';
		str = ft_strcat(str, buff);
	}
	return (str);
}

char	*ft_read_file(char *file_name)
{
	int		fd;
	int		r;
	char	*str;
	char	buff[BUFF_SIZE + 1];

	if (!(str = malloc(sizeof(char) * 2)))
		exit(0);
	if ((fd = open(file_name, O_RDONLY)) != 3)
		return (0);
	while ((r = read(fd, buff, BUFF_SIZE)))
	{
		buff[r] = '\0';
		str = ft_strcat(str, buff);
	}
	close(fd);
	return (str);
}
