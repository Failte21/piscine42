/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 17:37:49 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 21:48:42 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr(int nb);

int		str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a')
					|| (str[i] > 'z' && str[i] < '0'))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "";
	ft_putnbr(str_is_alpha(str));
	return (0);
}
