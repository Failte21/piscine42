/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 07:44:53 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/08 11:09:14 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int nb_from_str;
	int size;
	int i;
	int start;

	size = 1;
	i = 0;
	start = 0;
	nb_from_str = 0;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		i++;
	}
	start = i;

	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		size *= 10;
		i ++;
	}
		size /= 10;
	i = start;
	while(str[i] != '\0')
	{
		
		nb_from_str += (str[i] - '0') * size;
		size /= 10;
		i ++;
	}
	return (nb_from_str);
}
