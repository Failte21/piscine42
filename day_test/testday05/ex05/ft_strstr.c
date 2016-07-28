/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:18:02 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 15:59:28 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

char	*ft_strstr(char *str, char *tofind)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (tofind[0] == '\0')
		return str;
	while (str[i] != '\0')
	{
		if (str[i] == tofind[j])
		{
			while (str[i + j] == tofind[j])
				j++;
			if (tofind[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char str[] = "Salut, comment va tu ?";
	char tofind[] = "uta";
	ft_putstr(strstr(str, tofind));
	return (0);
}
