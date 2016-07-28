/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 18:08:33 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 21:55:09 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if(str[1] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "";
	ft_putnbr(ft_str_is_uppercase(str));
	return (1);
}
