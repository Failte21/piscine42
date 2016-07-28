/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 17:15:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/08 12:45:17 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	prov_char;

	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	size-= 1;
	while (i < size)
	{
		prov_char = str[size];
		str[size] = str[i];
		str[i] = prov_char;
		i++;
		size--;
	}
	return (str);
}
