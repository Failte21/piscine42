/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 16:58:25 by lsimon            #+#    #+#             */
/*   Updated: 2016/07/07 17:09:44 by lsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nbr);

void	ft_swap(int *a, int *b)
{
	int prov;

	prov = *a;
	*a = *b;
	*b = prov;

}

int	main()
{
	int a = 50;
	int b = 75;

	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar(',');
	ft_putnbr(b);
	ft_putchar('\n');
}
