/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 14:13:35 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 14:35:56 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' || i >= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int main()
{
	char dest[100] = "salut";
	char src[] = " hello mon poto";
	printf("total len : %u", ft_strlcpy(dest, src, 25));
	//printf("total len : %lu", strlcpy(dest, src, 25));
	printf("\n");
	printf("new str : %s", dest);
	return (1);
}
