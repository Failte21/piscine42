/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 17:35:04 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/11 23:23:56 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (new_word == 1))
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && (new_word == 0))
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a')
					|| (str[i] > 'z' && str[i] < '0'))
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
