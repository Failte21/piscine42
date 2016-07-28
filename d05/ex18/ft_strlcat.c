/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 19:39:16 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 14:01:03 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;

	i = 0;
	dest_len = strlen(dest);
	src_len = strlen(src);
	if (dest_len >= nb)
		return (src_len + nb);
	if (nb < dest_len + src_len)
		src[src_len - (nb - dest_len)] = '\0';
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest_len + src_len);
}
