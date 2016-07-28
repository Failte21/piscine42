/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:13:53 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 20:15:59 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	//dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "yo";
	char source[] = "hello";
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(source);

	ft_putchar('\n');
	ft_putchar('\n');
	ft_strcpy(source, dest);
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(source);
	return (0);
}
