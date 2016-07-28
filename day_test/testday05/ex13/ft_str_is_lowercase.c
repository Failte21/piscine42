/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 18:02:34 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 21:51:57 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);

int		str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if(str[1] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "fdfsFdf";
	ft_putnbr(str_is_lowercase(str));
	return (1);
}
