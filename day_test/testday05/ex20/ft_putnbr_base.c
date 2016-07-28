/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 00:22:45 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/12 23:04:58 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nb, char *base)
{
	int base_i;

	base_i = ft_strlen(base);
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(2147483, base);
		ft_putnbr_base(648, base);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb < base_i)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr_base(nb / base_i, base);
		ft_putchar(nb % base_i + '0');
	}
}

int main()
{
	ft_putnbr_base(-20, "0123456789ABCDEF");
	return (1);
}
