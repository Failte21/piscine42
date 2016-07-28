/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 17:15:32 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 17:36:37 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnbr(int n);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int prov_a;

	prov_a = *a;

	*a = prov_a / *b;
	*b = prov_a % *b;
}

int main()
{
	int a;
	int b;

	a = 50;
	b = 12;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return(0);
}

