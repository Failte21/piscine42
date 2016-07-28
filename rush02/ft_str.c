/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 07:16:46 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/28 14:07:16 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		get_height(char *str)
{
	int i;
	int height;

	i = 0;
	height = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			height++;
		i++;
	}
	return (height);
}

int		get_width(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*get_str(void)
{
	int		r;
	char	buff[BUFF_SIZE];
	int		start;
	char	*str;

	start = 0;
	if (!(str = malloc(sizeof(char) * 2)))
		return (0);
	while ((r = read(0, buff, BUFF_SIZE)))
	{
		if (start == 0)
		{
			start++;
			str[0] = *buff;
			str[1] = '\0';
		}
		else
			str = str_cat(str, *buff);
	}
	return (str);
}

int		get_colles(char *str, int height, int width)
{
	int start;

	start = 0;
	if (is_colle00(str, height))
		display("colle-00", width, height, start++);
	if (is_colle01(str, height))
		display("colle-01", width, height, start++);
	if (is_colle02(str, height))
		display("colle-02", width, height, start++);
	if (is_colle03(str, height))
		display("colle-03", width, height, start++);
	if (is_colle04(str, height))
		display("colle-04", width, height, start++);
	return (start);
}
